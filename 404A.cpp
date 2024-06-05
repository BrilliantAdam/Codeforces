//brilliantadam
//5/6/2024
//Accepted but need to solve it again with better algorithm
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
    char flag;
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        m += s[i];
    }
    flag = s[0][0];
    for(int i = 0; i < n-1; i++) {
        if(s[i][i] != s[i+1][i+1] || s[i][l] != s[i+1][l-1]){
            cout << "NO";
            return 0;
        }
        l--;
    }
    for(int i=0; i< m.length() ; i++){
        if(m[i] == flag){
            m.erase(i, 1);
        }
    }
    if(cntDistinct(m) == 1 && m[0] != flag && (n*n - (n+n-1) == m.length()) )
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
