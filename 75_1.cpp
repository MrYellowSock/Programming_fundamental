#include <fstream>
#include <iostream>
using namespace std;
#define MAX_LEN 15
int main()
{    
    ifstream  src("a.txt",   ios::binary);
    ofstream  dst("b.txt",   ios::binary);
    char * toRead = new char[MAX_LEN];
    src.read(toRead,MAX_LEN);

    string input = string(toRead);
    string a = input.substr(0,input.find_first_of(' '));
    string b = input.substr(input.find_last_of(' ')+1,MAX_LEN);
    dst << atoi(a.c_str()) + atoi(b.c_str());
    //dst << src.rdbuf();
}