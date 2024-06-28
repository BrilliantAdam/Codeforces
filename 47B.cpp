//brilliantadam
//28/6/2024
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int> table;
    table['A'] = 0;
    table['B'] = 0;
    table['C'] = 0;
    string s;
    for(int i=0; i <3; i++){
        cin >> s;
        if(s[1] == '<'){
            if(table[s[0]] - table[s[2]] < 2 ){
                table[s[0]]--;
                table[s[2]]++;
            }
            else{
                cout << "Impossible" << endl;
                return 0;
            }
        }
        else{
            if(table[s[0]] - table[s[2]] > -2){
                table[s[2]]--;
                table[s[0]]++;
            }
            else{
                cout << "Impossible" << endl;
                return 0;
            }
        }
    }
    vector<pair<char, int>> vec(table.begin(), table.end());
    sort(vec.begin(), vec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        return a.second < b.second;
    });
    for (const auto& pair : vec) {
        cout << pair.first;
    }
    return 0;
}
