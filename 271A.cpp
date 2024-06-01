//brilliantadam
//1/6/2024
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char shifting;
    string keyboard = "qwertyuiop[]asdfghjkl;'zxcvbnm,./", s1 , s2;
    cin >> shifting;
    cin >> s1;
    for(int i=0; i < s1.length() ; i++){
        for(int j=0; j< keyboard.length() ; j++){
            if(s1[i] == keyboard[j]){
                if(shifting == 'R')
                    s2 += keyboard[j-1];
                else
                    s2 += keyboard[j+1];
            }
        }
    }
    cout << s2;
    
    return 0;
}
