//brilliantadam
//28/6/2024
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m , x {1} , y {0} , b;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];    
    }
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> b;
        for(int j=0 ; j < n; j++){
            if(a[j] == b){
                x += j;
                y += (n-j);
            }
        }
    }
    cout << x << " " << y;
    
    return 0;
}
