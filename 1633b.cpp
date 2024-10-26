#include<bits/stdc++.h>
 
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a0=0,a1=0;
		for(int i=0;s[i];i++){
			if(s[i]=='0')a0++;
			else a1++;
		}
		if(a0!=a1)cout<<min(a0,a1)<<endl;
		else cout<<a0-1<<endl;
	}
}
