// brilliantadam
// 25/6/2024
#include <bits/stdc++.h>
using namespace std;

int countUniqueCharacters(const std::string& str) {
  std::unordered_set<char> uniqueChars(str.begin(), str.end());
  return uniqueChars.size();
}

int main() {
  int t;
  cin >> t;

  string s;
  while (t--) {
    int n, N{0}, S{0}, E{0}, W{0}, d1[2]{0}, d2[2]{0};
    cin >> n >> s;
    string s2{""};
    for (int i = 0; i < n; i++) {
      if (s[i] == 'N') {
        // Check Alternating between 'R' and 'H'
        if (N % 2 == 0) {
          s2 += 'R';
          // Check Destination
          d1[0] += 1;
        } else {
          s2 += 'H';
          d2[0] += 1;
        }
        N++;
      }
      if (s[i] == 'S') {
        if (S % 2 == 0) {
          s2 += 'R';
          d1[0] -= 1;
        } else {
          s2 += 'H';
          d2[0] -= 1;
        }
        S++;
      }

      if (s[i] == 'E') {
        if (E % 2 == 0) {
          s2 += 'H';
          d2[1] += 1;

        } else {
          s2 += 'R';
          d1[1] += 1;
        }
        E++;
      }

      if (s[i] == 'W') {
        if (W % 2 == 0) {
          s2 += 'H';
          d2[1] -= 1;
        } else {
          s2 += 'R';
          d1[1] -= 1;
        }
        W++;
      }
    }
    (d1[0] == d2[0] && d1[1] == d2[1] && countUniqueCharacters(s2) == 2)
        ? cout << s2 << endl
        : cout << "NO" << endl;
  }

  return 0;
}
