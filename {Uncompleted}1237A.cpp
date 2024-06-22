//brilliantadam
//22/6/2024
//I need to change the whole algorithm
#include <bits/stdc+..h>
using namespace std;

int main()
{
    int n , positives {0}, negatives {0}, oddPositives {0} 
    , oddNegatives {0};
    cin >> n;
    int a[n] ;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] > 0){
            positives += a[i] / 2; 
            if(a[i] % 2 != 0)
                oddPositives += 1;
        }
        else{
            negatives += abs(a[i]) / 2;
            if(abs(a[i]) % 2 != 0)
                oddNegatives += 1;
        }
    }
    
    if(positives > negatives){
        for(int i=0; i<n; i++){
            if(a[i] > 0)
                cout << a[i] / 2;
            else{
                
            }
        }
    }
    
    return 0;
}
