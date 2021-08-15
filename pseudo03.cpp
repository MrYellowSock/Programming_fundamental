#include <iostream>
using namespace std;

int main(){
    int width;
    cout<< "Enter number : ";
    cin >> width;
    for(int i = 0;i<width;i++){
        cout << "*";
    }
    cout << endl;
    for(int i= 0;i<width-2;i++){
        cout << "*";
        for(int j=0;j<width-2;j++){
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
    for(int i = 0;i<width;i++){
        cout << "*";
    }
    cout << endl;
    return 0;
}