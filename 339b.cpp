#include<bits/stdc++.h>

using namespace std;
int main() {
  long long n, a, t = 1, m, c = 0;
  cin >> n >> m;
  while (m--) {

    cin >> a;
    c += (a - t + n) % n;
    t = a;
  }
  cout << c;
}
