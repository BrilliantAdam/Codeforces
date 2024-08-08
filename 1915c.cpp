#include<iostream>
#include<cmath>
using namespace std;
 
int main(){
	int T;
	cin>>T;
	while(T--){
		int n,x;
		cin>>n;
		long long ans=0;
		for(int i=1;i<=n;i++){
			cin>>x;
			ans+=x;
		}
		long long s=sqrt(ans);
		if(s*s==ans)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
