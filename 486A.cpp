//brilliantadam
//6/6/2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if(n%2 == 0){
        cout << n/2;     
    }
    else{
        cout << abs(n/2) - n;
    }
}
