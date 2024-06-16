//brilliantadam
//16/6/2024
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ,k, x1, x2 , c {0};
    cin >> n >> k;
    while(n--){
        cin >> x1 >> x2;
        c += x2 - x1 + 1;
    }
    if(c%k != 0)
        cout << (ceil(c/float(k)) *k) - c;
    else
        cout << 0;
    return 0;
}
