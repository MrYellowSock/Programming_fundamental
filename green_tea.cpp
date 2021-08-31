#include <iostream>
using namespace std;

#define h2o 250
#define sugar 15
int main()
{
	int water;
	int sug ;
	for(int i = 0;i<7;i++)
	{
		cin >> water >> sug;
        int produced = 0;
		while (water >= h2o && sug >= sugar)
        {
            water -= h2o;
            sug -= sugar;
            produced++;
        }
        cout << produced;
        if(water > 0)cout << " water";
        cout << endl;
        
	}
    return 0;
}
