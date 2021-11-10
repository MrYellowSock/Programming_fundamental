#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    int matrix_1[m][n];
    int matrix_2[m][n];
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cin >> matrix_1[j][i];
        }
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cin >> matrix_2[j][i];
        }
    }

    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cout << matrix_1[j][i]+matrix_2[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}