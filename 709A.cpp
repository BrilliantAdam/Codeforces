//brilliantadam
//18/6/2024
// My mistake: I didn't clear the trash in every step.
// Other mistake: I thought Kolya clears the trash before it overflows but I found out he clears it after and not before.
//Last update: There is no need to use array for recieving the oranges sizes.
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, b , d , c {0} , o;
    cin >> n >> b >> d;
    long long sum {0};
    for(int i=0; i < n; i++){
        cin >> o;
        if(o <= b){
            sum += o;
            if(sum > d){
                c++;
                sum = 0;
            }
        }
    }
    cout << c;
 
    return 0;
}
