#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

int V_Cnt,start;
int *dist;
int **matrix;


vector<int> *directions;

void dodoo(int src){//dfs instead
    for(int i=0;i<V_Cnt;i++){
        int distFromstart = dist[src] + matrix[src][i];
        if(matrix[src][i] > 0 && distFromstart < dist[i]){//connected nodes/and shorter
            dist[i] = distFromstart;
            directions[i] = vector<int>(directions[src]);   //clone and add parent node 
            directions[i].push_back(src);
            dodoo(i);
        }
    }
}


int main(){
    cout << "VERTICE COUNT : ";
    cin >> V_Cnt;
    cout << "ENTER ADJENCY MATRIX : " << endl;

    dist = new int[V_Cnt];
    fill(dist,dist+V_Cnt,INT32_MAX);

    matrix = new int*[V_Cnt];
    directions = new vector<int>[V_Cnt];

    for(int j=0;j<V_Cnt;j++){
        matrix[j] = new int[V_Cnt];

        for(int i=0;i<V_Cnt;i++){
            cin >> matrix[j][i];
        }
    }

    cout << "START NODE:";
    cin >> start;

    dist[start] = 0;
    dodoo(start);
     

    for(int j=0;j<V_Cnt;j++){
        for(int i=0;i<directions[j].size();i++){
            cout << directions[j][i] << "->";
        }
        cout << j << " dist:" << dist[j]<< endl;
    }

    return 0;
}