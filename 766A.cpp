//brilliantadam
//29/5/2024
//https://codeforces.com/contest/766/problem/A
//Mostafa Saad Ibrahim Sheet
#include <iostream>
#include <string>
#include <algorithm> // For max function

using namespace std;

int findUncommonSubsequenceLength(string a, string b) {
    if (a == b) {
        // If both strings are identical, there's no uncommon subsequence.
        return -1;
    } else {
        // Otherwise, the length of the longest uncommon subsequence
        // is the length of the longer string.
        return max(a.length(), b.length());
    }
}

int main() {
    string a, b;

    // Input strings
    cin >> a >> b;

    // Find the length of the longest uncommon subsequence
    int result = findUncommonSubsequenceLength(a, b);

    // Output the result
    cout << result << endl;

    return 0;
}
