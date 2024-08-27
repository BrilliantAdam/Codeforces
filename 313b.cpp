#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
string s;
int n,m;
int c[N] ;
int main(){
	cin>>s;
	n=s.size();
	for(int i=1;i<n;i++){
		c[i]=(s[i]==s[i-1])+c[i-1];
	}
	cin>>m;
	while(m--){
		int a,b;
		cin>>a>>b;
		a--, b--;
		cout<<c[b]-c[a]<<endl;
	}
	return 0;
}
