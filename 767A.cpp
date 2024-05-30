//brilliantadam
//30/5/2024
//Frequency Array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , num;
    cin >>n;
    int frq[n+1] {0}, max {n};
    for(int i=0; i <n; i++){
        cin >> num;
        frq[num] = 1;
        while(frq[max]){ 
            cout << max << " ";
            max--;
        }
        cout << endl;
    }
    
 
    return 0;
}
