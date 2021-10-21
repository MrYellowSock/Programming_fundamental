#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    x += y;
    y = x-y;
    x -= y;
    cout << x << " " << y;
    return 0;
}