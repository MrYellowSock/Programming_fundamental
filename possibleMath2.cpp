#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
char operations[] = {'*','/','+','-'};
#define operationCount 4
#define deepNess operationCount+1
int nums[deepNess];
int target;

bool recurse(vector<float> &summy,int currentOp){
    if(summy.size() == 1){
        return summy[0] == target;
    }
    for(int i=1;i<summy.size();i+=2){
        if((char)summy[i] == operations[currentOp]){
            float res;
            float left = summy[i-1],right = summy[i+1];
            if(operations[currentOp] == '*'){
                res = left*right;
            }
            else if(operations[currentOp] == '/'){
                if(right == 0)return false;
                res = left/right;
            }
            else if(operations[currentOp] == '+'){
                res = left+right;
            }
            else if(operations[currentOp] == '-') {
                res = left-right;
            }
            summy[i] = res;
            summy.erase(summy.begin()+i+1);
            summy.erase(summy.begin()+i-1);
            i = -1;
        }
    }
    return recurse(summy,currentOp+1);
}

void calculate(int *arr,char *operators){
    vector<float> summy;
    for(int i=0;i<deepNess;i++){
        summy.push_back(arr[i]);
        if(i < operationCount){summy.push_back(operators[i]);}
    }
    vector<float> clone(summy);
    if(recurse(summy,0)){
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