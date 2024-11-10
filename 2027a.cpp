#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int ma=0,mb=0;
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			ma=max(ma,a);
			mb=max(mb,b);
		}
		cout<<2*(ma+mb)<<endl;
	}
	return 0;
}
