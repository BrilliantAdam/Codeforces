//=====================================================
// Author      : BrilliantAdam
// Date        : 4/7/2024
// Description : Junior Training Sheet V7.0
// Problem     : 433B
// Problem No. : 28
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n , m ,  count {0} , pos[2];
    char c;
    cin >> n >> m >> c;
    string s[n] , uni;
    for(int i=0; i < n; ++i){
        cin >> s[i];
        if(count == 0){
            for(int j=0; j<m; ++j){
                if(s[i][j] == c){
                    pos[0] = i;
                    if(count ==0)
                        pos[1] = j;
                    count++;
                }
            }
        }
    }
    // There is a problem in the array boundaries
    for(int i=pos[1] ; i < pos[1] + count; ++i){
        if(s[pos[0]-1][i] != '.')
            uni += s[pos[0]-1][i]; 
        if(s[pos[0]+1][i] != '.')
            uni += s[pos[0]+1][i]; 
    }
    set<char> unique_chars(uni.begin(), uni.end());
    // There is a problem if the string is empty after this loop
    // If it's empty uni.length() don't give 0 anymore
    cout << uni.length();
    
    return 0; 
}
