#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n,f,a,b;
		cin>>n>>f>>a>>b;
		ll prev=0;
		ll ans=0;
		for(int i=0;i<n;i++) {
			ll x;
			cin>>x;
			ans+=min(b,(x-prev)*a);
			prev=x;
		}
		if(ans<f) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
}
