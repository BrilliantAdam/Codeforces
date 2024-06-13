//brilliantadam
//13/6/2024
//https://codeforces.com/contest/1883/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, l , k , e {0} , o {0};
    
    cin >> t;
    string s;
    while(t--){
        cin >> l >> k;
        cin >> s;
        map<char, int> frq;
        for(int i=0; i< l; i++){
            frq[s[i]]++;
        }
         for(auto it = frq.begin(); it!= frq.end(); it++){
             if(it->second %2 == 0){
                 e++;
             }
             else{
                 o++;
             }
         }
         if((k >= o && e>0) || (o-k <= 1 ) || l == 1){
             cout << "YES"<< endl;
             
         }
         else{
             cout << "NO" << endl;
         }
        e =0;
        o = 0;
         
    }
    
    
    return 0;
}
