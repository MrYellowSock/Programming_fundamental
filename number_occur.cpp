#include <iostream>
using namespace std;
int n,interested;
int main()
{
    cin >> n;

    int arr[n];
    for(int i =0;i<n;i++)
        cin >> arr[i];

    cin >> interested;

    int lenght = 0;
    int found[n];
    for(int i = 0;i < n;i++)
        if(arr[i] == interested)
            found[lenght++] = i+1; 

    if(lenght == 0){
        cout << "0";
    }
    else{
        for(int i=0;i<lenght;i++){
            cout << found[i] << " ";
        }
    }
    return 0;
}
