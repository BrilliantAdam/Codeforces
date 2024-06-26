//https://codeforces.com/contest/1982/problem/b
//Crazy 3RROR
#include <bits/stdc++.h>
using namespace std;
int main() {
  long long t, x, y, k, r;
  cin >> t;
  while (t--) {
    cin >> x >> y >> k;

    while (k > 0) {
      r = y - (x % y);

      if (r <= k) {
        x += r;
        k -= r;
        while (x % y == 0) {
          //WHY DOESN'T IT BREAK?????
          if (x == 1) break;
          x /= y;
          cout << "x is " << x << endl;
        }
      } else {
        x += k;
        k = 0;
      }
    }

    cout << x << endl;
  }
  return 0;
}
