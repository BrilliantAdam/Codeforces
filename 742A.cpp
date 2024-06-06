//brilliantadam
//6/6/2024
//number theory
//Ones are repeated in a sequence when we multiply the number by itself many times
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    //Ones digits sequence of '8'
    int digits[4] {6,8,4,2};
    cin >> n;
    if(n==0)
        cout << 1;
    else
        cout << digits[n%4];
    return 0;
}
