#include <iostream>
using namespace std;

int main(){
    int ROW;
    cin >> ROW;
    int i=0;
    while (i < ROW){
        i++;
        int j = 0;
        while (j < i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
    }

    return 0;
}