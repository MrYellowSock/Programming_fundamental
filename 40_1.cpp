#include<iostream>

using namespace std;

char swapCase(char x){
    if(x >= 'A' && x <= 'Z'){
        return (char)(x-('A'-'a'));
    }
    else if(x >= 'a' && x <= 'z'){
        return (char)(x+('A'-'a'));
    }
    return x;
}

int main(){
    string input;
    cin >> input;

    for(char s:input){
        cout << swapCase(s);
    }

    return 0;
}