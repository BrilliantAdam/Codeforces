//brilliantadam
//8/6/2024
//Coprimes: numbers that greatest common divisor is "one"
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long l , r;
    cin >> l >> r;
    if(l%2 != 0)
        l++;
    if((r-l) >= 2){
        cout << l << " " << l+1 << " " << l+2;
    }
    else{
        cout << -1;
    }
 
    return 0;
}
