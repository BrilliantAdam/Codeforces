#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y, z, arr[1000111];
    cin >> x;
    for (int i = 0; i < x; i++)
        cin >> arr[i];
    sort(arr, arr + x);
    cin >> y;
    while (y--) {
        cin >> z;
        cout << upper_bound(arr, arr + x, z) - arr << '\n';
    }
    return 0;
}
