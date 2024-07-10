//=====================================================
// Author      : BrilliantAdam
// Date        : 2024-07-10 20:14:00
// Description : Junior Training Sheet V7.0
// Problem Code: 433B
// Problem Name: B_Keyboard
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

double eucli(int x1, int x2 , int y1 , int y2){
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    map<char,int> checkCharacter;
    int n, m, x ;
    cin >> n >> m >> x;
    vector<pair<int,int>> shiftPos;
    vector<pair<int,int>> charPos;
    char keyboard[n+1][m+1];
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> keyboard[i][j];
            if(keyboard[i][j] == 'S')
                shiftPos.push_back({i, j});
            else{
                charPos.push_back({i, j});
                checkCharacter[keyboard[i][j]] = 0;
            } 
        }
    }
    for(auto pos : charPos){
        bool withinRange = false;
        for(auto sPos: shiftPos){
            if(eucli(pos.first, sPos.first, pos.second, sPos.second) <= x){
                withinRange = true;
                break;
            }
        }
        if(!withinRange){
            checkCharacter[keyboard[pos.first][pos.second]] = 1;
        }
    }

    for(auto &entry : checkCharacter){
        cout << "Character: " << entry.first << " " << (entry.second ? "Yes" : "No") << endl;
    }

    return 0;
}
