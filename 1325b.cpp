//brilliantadam
#include<bits/stdc++.h>
using namespace std;
    int main(){
        int t;
        cin>>t;
        while(t--){
        int n;
        cin>>n;
        set<int>s1;
            for(int i=0;i<n;i++){
            	int x;
            	cin>>x;
            	s1.insert(x);
            }
        cout<<s1.size()<<'\n';
    }
}
