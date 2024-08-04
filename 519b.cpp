#include <iostream>
using namespace std;

int main() {
    int t;
    long long x, sum1 = 0, sum2 = 0, sum3 = 0;
    
    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> x;
        sum1 += x;
    }

    for (int i = 0; i < t - 1; ++i) {
        cin >> x;
        sum2 += x;
    }

    for (int i = 0; i < t - 2; ++i) {
        cin >> x;
        sum3 += x;
    }
    
    cout << sum1 - sum2 << endl;
    cout << sum2 - sum3;
    
    return 0;
}
