//brilliantadam
//6/6/2024
 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long a , b , c;
    cin >> a >> b >> c;
    cout  << fixed << setprecision(0) << ceil(a/double(c)) * ceil(b/double(c));
    return 0;
}
