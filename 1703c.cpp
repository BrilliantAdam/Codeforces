#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        for(int k = 0; k < n; k++){
            int a;
            cin >> a;
            string s;
            cin >> s;
            int d = 0, u = 0;
            for(auto a: s){
                if(a == 'U') u++;
                else d++;
            }
            v[k] += (10 - u + d) % 10;
            cout << v[k] % 10 << " ";
        }
        cout << endl;
    }
}
