//brilliantadam
//15/6/2024
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s , s2 ;
    int a , b , c , cnt {0};
    cin >> s;
    a = s.find('|');
    b = s.length() - s.find('|') -1;
    cin >> s2;
    c = s2.length();
    if(a >= b){
        b += c;
        if((b - a) % 2 == 0 && (b-a) >= 0){
            for(int i=0; i<a; i++){
                cout << s[i];
                cnt++;
            }
            for(int i=0; i< (b-a)/2; i++){
                cout << s2[i];
            }
            
            for(int i=a; i <b; i++ ){
                cout << s[i];
            }
            for(int i=cnt; cnt < b-a; cnt++){
                if(cnt != 0)
                     cout << s2[cnt];
            }
        }
        else{
            cout << "Impossible";
        }
    }
    else{
         a += c;
        if((a - b) % 2 == 0 && (a-b) >= 0){
            for(int i=0; i<a; i++){
                cout << s[i];
                cnt++;
            }
            for(int i=0; i< (a-b)/2; i++){
                cout << s2[i];
            }
            
            for(int i=b; i <a; i++ ){
                cout << s[i];
            }
            for(int i=cnt; cnt < a-b; cnt++){
                if(cnt != 0)
                     cout << s2[cnt];
            }
        }
        else{
            cout << "Impossible";
        }
    }
    return 0;
}
