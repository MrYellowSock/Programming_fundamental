#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    string input,output;
    cout << "Input:";
    cin >> input;
    cout << "Output:";
    cin >> output;
    
    ifstream  src(input,   ios::binary);
    ofstream  dst(output,   ios::binary);
    dst << src.rdbuf();
}