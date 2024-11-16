#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int T,n,s;
int a[1000000];
map<int,int> mp;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>T;
	while(T--){
		cin>>n;
		s=0;
		mp.clear();
		mp[0]=1;
		int ans=0;
		for(int i=1;i<=n;++i){
			cin>>a[i];
			s+=a[i];
			if(mp.count(s)){
				ans++;
				mp.clear();
				mp[0]=1;
				s=0;
			}else mp[s]=1;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
