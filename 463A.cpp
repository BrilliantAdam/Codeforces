//brilliantadam
//22/6/2024
//A horrible problem to understand
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, x, y, max = -1;
    cin >> n >> s;
 
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (s > x || (s == x && y == 0)) {
            int sweets = 100 - y;
            if(y==0)
                sweets = 0;
                
            if (sweets > max) {
                max = sweets;
            }
        }
    }
 
    cout << max;
 
    return 0;
}
