//brilliantadam
//24/6/2024
//Cancelled 
//Must change Algorithm

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, l , r, c, criminals {0};
    cin >> n >> a;
    int frq[n];
    for(int i=0; i<n; i++){
        cin >> frq[i];
    }
    l = a - 1;
    r = n - a;
    if(l>=r){
        for(int i=a; i<n; i++){
            c = a - 2;
            if(frq[i] + frq[c] == 2)
                criminals++;
            c--;
        }
        for(int i=c; i>=0; i--){
            if(frq[i] == 1)
                criminals++;
        }
    }
    else{
        for(int i=a; i>0; i--){
            c = a - 2;
            if(frq[i] + frq[c] == 2)
                criminals++;
            c--;
        }
        for(int i=c; i>=0; i++){
            if(frq[i] == 1)
                criminals++;
        }
    }
    }
   
    
    cout << criminals;
    return 0;
}
