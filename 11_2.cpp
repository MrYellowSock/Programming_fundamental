//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด กับจำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
#include <iostream>
#include <algorithm>
using namespace std;
#define cnt 3
int main(){
    int x,y,z;
    cin >> x >> y >> z;
    int highest;

    highest = x;
    if(y > highest){highest = y;}
    if(z > highest){highest = z;}

    cout << x+y+z - highest;
    return 0;
}