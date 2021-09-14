#include <iostream>
using namespace std;


int main()
{
    string input,output;
    cout << "Input:";
    cin >> input;
    cout << "Output:";
    cin >> output;
    string command = "cp ";
    command += input+" "+output;
    system(command.c_str());    //command line method
}