#include <iostream>
#include <algorithm>
using namespace std;

void drawLine(char ** arr, int start_x,int start_y,int xcr,int ycr,int w,int h){
    if(start_x >= 0 && start_y >= 0 && start_x < w && start_y < h){
        arr[start_y][start_x] = '*';
        drawLine(arr,start_x+xcr,start_y+ycr,xcr,ycr,w,h);
    }
}
int main(){
    int input;
    cin >> input;

    int h=input;
    int w=(h%2 == 0)?h-1:h;
    char ** buffer = new char*[h];
    for(int j=0;j<h;j++){
        buffer[j] = new char[w];
        fill(buffer[j],buffer[j]+w,'-');
    }

    drawLine(buffer,w/2,0,1,1,w,h);
    drawLine(buffer,w/2,0,-1,1,w,h);
    
    drawLine(buffer,w/2,h-1,1,-1,w,h);
    drawLine(buffer,w/2,h-1,-1,-1,w,h);



    for(int j=0;j<h;j++){
        for(int i=0;i<w;i++){
            cout << buffer[j][i];
        }
        cout << endl;
    }
    return 0;
}