#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    string total = "";
    string current = "";
    cout << "Input data string:" << endl;
    while (current != ".")
    {
        cin >> current;
        total += current+'\n';
    }    

    ofstream  dst("./data.txt ",   ios::binary);
    dst << total;
}