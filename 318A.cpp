//brilliantadam
//1/6/2024
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n , k;
    cin >> n >> k;
    if(k > ceil(n/2.0)){
        k -= ceil(n/2.0);
        cout << k*2;
    }
    else{
        cout << (k*2) -1;
    }
    return 0;
}
