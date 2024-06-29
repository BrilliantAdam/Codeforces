//brilliantadam
//28/6/2024
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , c =0;
    cin >> n;
    char colors[8] = {'R' , 'Y' , 'G', 'I' , 'V' , 'B' , 'O'};
    for(int i=0; i <n; i++){
        cout << colors[c];
        c++;
        if(c % 7 == 0) c = 3;
    }
    return 0;
}
