//brilliantadam
//14/6/2024
//##Time Limited exceeded Finally solved##
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t , n ,c {0} , tmp;
    cin >> t;
    for(int i=0; i <t; i++){
        cin >> n;
        int a[n];
        long long sum {0};
        for(int x=0; x<n; x++){
            cin >> a[x];   
        }
        if(a[0] == 0)
            c++;
        for(int x=0; x<n-1; x++){ // 0 1 2 1 4
            if(a[x] > a[x+1]){
                tmp = a[x];
                a[x] = a[x+1];
                a[x+1] = tmp;
            }
            sum += a[x];
            if(a[x+1] == sum)
                c++;
        }
        
        cout << c << endl;
        c = 0;
    }
    return 0;
}
