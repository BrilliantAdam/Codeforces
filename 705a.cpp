#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    cout << "I hate";
    for (i = 1; i < n; i++)
        cout << (i & 1 ? " that I love" : " that I hate");
    cout << " it";
}
