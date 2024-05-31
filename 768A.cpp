//brilliantadam
//31/5/2024
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n , c {0};
    cin >> n;
    long long a[n];
 
    for(int i=0; i <n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i=1; i <n; i++){
        if(a[i] > a[0] && a[i] < a[n-1]){
            c++;
        }
    }
    cout << c;
    return 0;
}
