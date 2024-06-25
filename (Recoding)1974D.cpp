// brilliantadam
// 25/6/2024
// Chat GPT Assist to make my code shorter with switch statement and ternary operator :) 
#include <bits/stdc++.h>
using namespace std;

int countUniqueCharacters(const std::string& str) {
    return unordered_set<char>(str.begin(), str.end()).size();
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, N = 0, S = 0, E = 0, W = 0;
        array<int, 2> d1 = {0, 0}, d2 = {0, 0};
        string s, s2;
        cin >> n >> s;
        for(char c : s) {
            switch(c) {
                case 'N':
                    s2 += (N++ % 2 == 0) ? (d1[0]++, 'R') : (d2[0]++, 'H');
                    break;
                case 'S':
                    s2 += (S++ % 2 == 0) ? (d1[0]--, 'R') : (d2[0]--, 'H');
                    break;
                case 'E':
                    s2 += (E++ % 2 == 0) ? (d2[1]++, 'H') : (d1[1]++, 'R');
                    break;
                case 'W':
                    s2 += (W++ % 2 == 0) ? (d2[1]--, 'H') : (d1[1]--, 'R');
                    break;
            }
        }
        (d1 == d2 && countUniqueCharacters(s2) == 2) ? cout << s2 << endl : cout << "NO" << endl;
    }
    return 0;
}
