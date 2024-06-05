//brilliantadam
//5/6/2024

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    for(int i=0 ; i <5; i++){
        for(int j=0; j < 5; j++){
            cin >> a;
            if(a == 1){
                cout << abs(i-2) + abs(j-2);
                return 0;
            }
        }
    }

    return 0;
}
