#include <iostream>
using namespace std;

int main(){
    int first,second;
    cout << "Enter first number : ";
    cin >> first;
    cout << "Enter second number : ";
    cin >> second;

    cout << "Greatest common divisor = ";
    
    int mini = min(first,second);
    int maxi = max(first,second);

    for(int div = mini;div >= 0;div--){
        if(mini % div == 0 && maxi % div == 0){
            cout << div;
            break;
        }
    }

    return 0;
}