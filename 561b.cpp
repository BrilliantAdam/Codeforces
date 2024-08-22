#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    long long int n;
    cin >> n;
    map<long long int, long long int> m1;
    map<long long int, long long int> m2;

    for (int i = 0; i < n; i++) {
        long long int x, y;
        cin >> x >> y;
        m1[x - y]++;
        m2[x + y]++;
    }

    long long int sum = 0;
    for (const auto &it : m1)
        sum += (it.second * (it.second - 1)) / 2;
    for (const auto &it : m2)
        sum += (it.second * (it.second - 1)) / 2;

    cout << sum;
    return 0;
}
