#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
char operations[] = {'+','-','*','/'};
#define operationCount 4
#define deepNess operationCount+1
int nums[deepNess];
int target;

void safeRemove(vector<float> & summy,int & i){
    summy.erase(summy.begin()+i+1);
    summy.erase(summy.begin()+i-1);
    i = -1;
}
void calculate(int *arr,char *operators){
    vector<float> summy;
    for(int i=0;i<deepNess;i++){
        summy.push_back(arr[i]);
        if(i < operationCount){summy.push_back(operators[i]);}
    }
    vector<float> clone(summy);
    for(int i=1;i<summy.size();i+=2){
        if((char)summy[i] == '/'){
            if(summy[i+1] == 0)return;
            summy[i] = (float)summy[i-1]/(float)summy[i+1];
            safeRemove(summy,i);
        }
        else if((char)summy[i] == '*'){
            summy[i] = (float)summy[i-1]*summy[i+1];
            safeRemove(summy,i);
        }
    }
    for(int i=1;i<summy.size();i+=2){
        if((char)summy[i] == '+'){
            summy[i] = summy[i-1]+summy[i+1];
            safeRemove(summy,i);
        }
        else if((char)summy[i] == '-'){
            summy[i] = summy[i-1]-summy[i+1];
            safeRemove(summy,i);
        }
    }
    
    if(summy[0] == target){
        for(int i=0;i<clone.size();i++){
            if(i % 2 == 1){
                cout << (char)clone[i];
            }
            else{
                cout << clone[i];
            }
        }
        cout << " = " << summy[0] << endl;
    }   
}

bool checkDup(int * arr,int len){
    for(int j=0;j<len;j++){
        for(int i=j+1;i<len;i++){
            if(arr[j] == arr[i])return true;
        }
    }
    return false;
}

void shuffleOperator(char * arr,int * numarr,int currentIndx,int len){
    if(currentIndx == len){
        calculate(numarr,arr);
        return;
    }
    for(int j=0;j<len;j++){
        arr[currentIndx] = operations[j];
        shuffleOperator(arr,numarr,currentIndx+1,len);
    }
}

void shuffleNumber(int * arr,int currentIndx,int len){
    if(currentIndx >= len){
        char *ops = new char[operationCount];
        shuffleOperator(ops,arr,0,operationCount);
        return;
    }
    for(int j=0;j<len;j++){
        arr[currentIndx] = nums[j];
        if(checkDup(arr,currentIndx+1))continue;
        shuffleNumber(arr,currentIndx+1,len);
    }
}


int main(){

    cout << "INPUT : ";
    for(int i=0;i<deepNess;i++){    //example 1 2 3 4 5 6
        cin >> nums[i];
    }
    cin >> target;

    int *arrNum = new int[deepNess];
    shuffleNumber(arrNum,0,deepNess);

    return 0;
}