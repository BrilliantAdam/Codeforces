#include<bits/stdc++.h>
using namespace std;
int t,n,cnt;
string a,b;
int main(){
	cin>>t;
	while(t--){
		cnt=0;
		cin>>n>>a>>b;
		for(int i=1;i<=n;i++){
			if(b[i-1]=='1'&&(a[i-1]=='0'||a[i-2]=='1'))
				cnt++;
			else if(b[i-1]=='1'&&a[i]=='1'){
				cnt++;
				a[i]='2';
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
