//brilliantadam
//24/6/2024
//Consumed so much time because of lack of focus when I was debuging without using spaces when recieveing t1,t2,..etc
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, criminals {0} , s1 {0} , s2 {0};
    cin >> n >> a;
    int frq[n+1] = {0}, c = a-1;
    for(int i=1; i<=n; i++){
        cin >> frq[i];
        s1 += frq[i];
        if(i == a && frq[i] == 1){
            s2 +=1;
            criminals++;
        }
    }
    for(int i= a+1; i<=n; i++){
        if(c > 0){
            if(frq[i] + frq[c] == 2)
                criminals +=2;
            if(frq[i] == 1)
                s2 +=1;
            if(frq[c] == 1)
                s2 +=1;
        }
        else
            break;
        c--;
    }
    cout << criminals + (s1-s2);
    return 0;
}
