#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int input;
    cin >> input;

    int h=input;
    int w=(h%2 == 0)?h-1:h;

    for(int j=0;j<h/2;j++){
        for(int i=0;i<w;i++){
            cout << ((i == w/2+j || i == w/2-j)?"*":"-");
        }
        cout << endl;
    }
    for(int j=h/2;j<h;j++){
        int jb = j-h/2;
        for(int i=0;i<w;i++){
            cout << ((i == jb || i == w-jb-1)?"*":"-");
        }
        cout << endl;
    }
    return 0;
}