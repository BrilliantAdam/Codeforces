
//brilliantadam
//9/6/2024
//Mistake solved. I forgot to declare "pairs" as long long.
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a , b ;
    long long pairs {0};
    cin >> a >> b;
    if(a <= b){
        for(int i=1; i<=a; i++){
            pairs += (( (i + b) / 5) - i/5);    
        }  
    }
    else{
        for(int i=1; i<=b; i++){
            pairs += (( (i + a) / 5) - i/5);    
        }    
    }
    cout << pairs;
    return 0;
}
