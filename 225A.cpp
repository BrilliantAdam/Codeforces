//brilliantadam
//9/6/2024
//A. Dice Tower
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , a , b;
    cin >> n >> a;
    b = 7 - a;
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin >>a; 
            if(a == b || (7-a) == b){
                cout << "NO";
                return 0;
            }
        }
        if(i>0)
         b = 7-b; 
    }
    cout << "YES";
    return 0;
}
