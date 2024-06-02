//brrilliantadam
//2/6/2024
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n ;
   cin >> n;
   int b[n] , a[n];
   for(int i=0; i <n; i++){
       cin >> b[i] >> a[i];
       if(b[i] != a[i]){
           cout << "rated";
           return 0;
       }
   }
   for(int i=0; i <n; i++){
       for(int j=i+1 ; j<n; j++){
           if (b[i] < b[j]){
               cout << "unrated";
               return 0;
           }
       }
   }
    cout << "maybe";
    return 0;
}
