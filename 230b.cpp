#include <bits/stdc++.h>
using namespace std;

int main() {
    long long num, t, divisor, sqrtNum;
    cin >> t;
    while (t--) {
        cin >> num;
        sqrtNum = sqrt(num);
        for (divisor = 2; divisor * divisor < sqrtNum; divisor++) if (!(num % divisor)) break;
        if (divisor * divisor > sqrtNum && sqrtNum * sqrtNum == num && num > 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
