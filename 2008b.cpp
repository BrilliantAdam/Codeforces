
#include<bits/stdc++.h>
using namespace std;
int t,a,b,p;
string s;
 
int main() {
	for(cin>>t;t--;p=0) {
		cin>>a>>s;
		b=sqrt(a);
		if(b*b!=a) {
			cout<<"No\n";
			continue;
		}
		s=' '+s;
		for(int i=b+1;i<s.size()-b;i++)
			if(i%b==1||i%b==0) {
				if(s[i]!='1') p=1;
			} else if(s[i]!='0') p=1;
		if(p==1) cout<<"No\n";
		else cout<<"Yes\n";
	}
}
