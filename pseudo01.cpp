#include <iostream>
using namespace std;

int main(){
    int input;
    cout << "Enter number : ";
    cin >> input;
    
    cout << "Factoring result : ";
    for(int i=2;i<=input;i++){
        bool isPrime = true;
        for(int p=2;p<i;p++){
            if(i % p == 0 && i != p){
                isPrime = false;
                break;
            }
        }
        
        while (input % i == 0)
        {
            input /= i;
            cout << i;
            if(input != 1)cout << " x ";
        }
        

    }
    cout << endl;

    return 0;
}