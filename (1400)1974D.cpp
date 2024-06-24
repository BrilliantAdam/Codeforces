//brilliantadam
//24/6/2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string s;
    while(t--){
        int n, N {0} , S{0} , E{0} , W{0};
        cin >> n >> s;
        for(int i=0; i<n; i++){
            
            if(s[i] == 'N')
                N++;
            else if(s[i] == 'S')
                S++;
            else if(s[i] == 'E')
                E++;
            else
                W++;
        }

    }
    
    return 0;
}
