#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
	    int flag=1,ans=1,n;
	    cin>>n;
		string s;
		cin>>s;
		for(int i=1;i<=n-1;i++){
			if(s[i]==s[i-1]){
				flag++;
				ans=max(flag,ans);
			}
			else{
				flag=1;
			}
		}
		cout<<ans+1<<endl;
			}
		return 0;
}
