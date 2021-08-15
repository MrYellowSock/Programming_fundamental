//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด กับจำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
#include <iostream>
#include <algorithm>
using namespace std;
#define cnt 3
int main(){
    int arr[cnt];
    for(int i=0;i<cnt;i++){
        cin >> arr[i];
    }
    sort(arr,arr+cnt);
    cout << arr[0]+arr[1];
    return 0;
}