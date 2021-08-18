#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int targ;
int main()
{
    cin >> targ;
    int arr[8];
    for(int j = 0;j<8;j++)
        cin >> arr[j];

    sort(arr,arr+8);
    int prev = abs(targ-arr[0]);
    for(int j=1;j<8;j++){
        int current = abs(targ-arr[j]);
        if(current > prev){
            cout << arr[j-1];//เรียงลำดับและเมื่อเจอตัวที่ห่างมากกว่าตัวก่อนหน้าให้หยุด
            return 0;
        }
        prev = current;
    }
    cout << arr[7];     
    return 0;
}