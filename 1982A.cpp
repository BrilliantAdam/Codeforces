//brilliantadam
//26/6/2024
//Changed all if statements to ternary operators :D 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, x1, y1, x2, y2;
    cin >> t;
    while (t--) {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << ((x1 < y1) ? ((x2 >= y1 && y2 <= x2) ? "NO" : "YES") : ((y2 >= x1 && x2 <= y2) ? "NO" : "YES")) << endl;
    }
    return 0;
}
