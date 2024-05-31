//brilliantadam
//31/5/2024
#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(const string& str) {
    string result;
    for (char c : str) {
        if (result.find(c) == string::npos) {
            result += c;
        }
    }
    return result;
}
int main()
{
    string s1;
    int l, n{0};
    cin >> l >> s1;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    s1 = removeDuplicates(s1);
    cout << ((s1.length() == 26) ? "YES" : "NO") << endl;
    return 0;
}
