#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int i=0;
        int j=n-1;
        while(i<n-1 && v[i]==v[i+1]) i++;
        while(j>=1 && v[j]==v[j-1]) j--;

        if(v[0]==v[n-1]){
            cout<<max(j-i-1,0)<<endl;
        }
        else{
            cout<<max(min(n-i-1,j),0)<<endl;
        }
    }
}
