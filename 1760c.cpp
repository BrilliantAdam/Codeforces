//brilliantadam
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5],b[n+5];
		for(int i=1;i<=n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b+1,b+n+1);
		for(int i=1;i<=n;i++){
			if(a[i]==b[n])cout<<-b[n-1]+a[i]<<' ';
			else cout<<-b[n]+a[i]<<" ";
		}
		cout<<endl;
	}	
}
