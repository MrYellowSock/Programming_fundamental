#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ofstream  dst("./data.txt ",   ios::binary);
    string current = "";
    cout << "Input data string:" << endl;
    while (current != ".")
    {
        cin >> current;
        dst << current+'\n';
    }    
}