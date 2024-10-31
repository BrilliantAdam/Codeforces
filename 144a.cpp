//brilliantadam
#include <iostream>
using namespace std;

int main() {
    int n, x;
    int maxVal = -1, minVal = 100;
    int maxIndex = 0, minIndex = 0;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x > maxVal) {
            maxVal = x;
            maxIndex = i;
        }
        if (x <= minVal) {
            minVal = x;
            minIndex = i;
        }
    }

    int result = maxIndex + (n - minIndex) - 1 - (maxIndex > minIndex);
    cout << result;

    return 0;
}
