//brilliantadam
//27/6/2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, energy {0} , dollars {0};
    cin >> n;
    int a[n+1] {0};
    
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        energy += a[i] - a[i+1];
        if(energy < 0 ){
            dollars += abs(energy);
            energy =0;
        }
    }
    cout << dollars;
    return 0;
}

