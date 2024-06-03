//brilliantadam
//3/6/2024
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    map <string, int> myMap;
    int n, maxValue {0};
    cin >> n;
    string a, maxKey;
    for(int i=0; i < n; i++){
        cin >> a;
        myMap[a] += 1;
    }
    for (const auto& pair : myMap) {
        if (pair.second > maxValue) {
            maxValue = pair.second;
            maxKey = pair.first;
          }
    }
    cout << maxKey;
    return 0;
}
