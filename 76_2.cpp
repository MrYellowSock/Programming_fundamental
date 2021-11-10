#include <iostream>
using namespace std;

int ** getMatrix(int m,int n){
    int ** matrix = new int*[n];
    for(int i=0;i<n;i++){
        matrix[i] = new int[m];
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cin >> matrix[j][i];
        }
    }
    return matrix;
}

int main(){
    int m,n;
    cin >> m >> n;
    int ** matrix_1 = getMatrix(m,n);
    int ** matrix_2 = getMatrix(m,n);
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cout << matrix_1[j][i]+matrix_2[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}