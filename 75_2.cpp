#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
#define MAX_LEN 15
void getAll(char * str, vector<int> &tot){
    char current[MAX_LEN];
    int i=0;
    for(char * c = str;*c != 0;c++){
        if(*c == ' '){
            current[i] = 0;
            if(i > 0){
                tot.push_back(atoi(current));
            }
            i = 0;
        }
        else{
            current[i++] = *c;
        }
    }
    if(i > 0){
        tot.push_back(atoi(current));
    }
}
int main()
{    
    ifstream  src("a.txt",   ios::binary);
    ofstream  dst("b.txt",   ios::binary);
    char * toRead = new char[MAX_LEN];
    src.read(toRead,MAX_LEN);

    vector<int> test;
    getAll(toRead,test);
    int sum = 0;
    for(int v:test){
        sum += v;
    }
    dst << sum;
    //dst << atoi(a.c_str()) + atoi(b.c_str());
    //dst << src.rdbuf();
}