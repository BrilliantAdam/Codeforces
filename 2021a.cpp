#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		int b=(a[1]+a[2])/2;
		for(int i=3;i<=n;i++) b=(b+a[i])/2;
		cout<<b<<endl;
	}
	return 0;
}
