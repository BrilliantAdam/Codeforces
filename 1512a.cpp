#include<bits/stdc++.h>
#define N 105
using namespace std;
int T,n,a[N],ans;
int main(){
	cin>>T;
	while(T--){
		ans=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(!ans&&i>1&&a[i]!=a[i-1])ans=i;
		}
		if(ans==2&&a[1]!=a[n])ans=1;
		cout<<ans<<endl;
	}
	return 0;
}
