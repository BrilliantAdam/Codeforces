//brilliantadam
//25/6/2024
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
    l = n -1;
    string s1 , s2;
    for(int x=0 , j=l; x<n; x++, j--){
        string s;
        cin >> s;
        ((x != j)? s1 += (s[x], s1+= s[j])  : s1 += s[j]);
        s[x] = ' ';s[j] = ' ';
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        s2 += s;
    }
    // cout << ((cntDistinct(s1) == 1 && cntDistinct(s2) == 1 && s1[0] != s2[0])? "YES" : "NO");

    //Failed to delete diagonal values from string.
    cout << "s1 " << s1 << " s2: " << s2 << endl;
    cout << cntDistinct(s1) << " " << cntDistinct(s2) << " => " << s1[0] << " : " << s2[0];
    return 0;
}
