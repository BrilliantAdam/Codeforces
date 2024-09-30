#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool found = false;
        for (int i = 31; i >= 2; i--) {
            int k = stoi(bitset<5>(i).to_string());
            while (n % k == 0) n /= k;
        }

        if (n == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
