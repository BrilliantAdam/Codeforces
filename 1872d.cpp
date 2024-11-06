#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i++){
    long long n, x, y;
    cin >> n >> x >> y;
    long long A = n / x - n / lcm(x, y);
    long long B = n / y - n / lcm(x, y);
    long long ans = 0;
    ans += (n + n - (A - 1)) * A / 2;
    ans -= (1 + B) * B / 2;
    cout << ans << endl;
  }
}
