//brilliantadam
//5/6/2024
//Unsolved yet, need to work on it later. ( Took me over 3 hours)
#include<bits/stdc++.h>
using namespace std;
 int cntDistinct(string str)
{
    unordered_set<char> s;
 
    for (int i = 0; i < str.size(); i++) {
        s.insert(str[i]);
    }

    return s.size();
}
int main() {
    int n , l;
    cin >> n;
    l = n-1;
    string s[n] , m;
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for(int i = 0; i < n-1; i++) {
        if(s[i][i] != s[i+1][i+1] || s[i][l] != s[i+1][l-1]){
            cout << "NO";
            return 0;
        }
        else{
            m += s[i];
        }
        l--;
    }
    if(cntDistinct(m) == 2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
