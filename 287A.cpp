//brilliantadam
//17/6/2024
#include <bits/stdc++.h>
using namespace std;
int main(){
    int asciiSum{0};
    string s[4];
    for(int i=0; i<4; i++){
        cin >> s[i];
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            asciiSum = int(s[i][j]) + int(s[i][j+1]) + int(s[i+1][j]) + int(s[i+1][j+1]);
            if( asciiSum == 173 || asciiSum == 151 || asciiSum == 140 || asciiSum == 184){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    
    return 0;
}
