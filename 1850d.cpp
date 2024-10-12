//brilliantadam
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		sort(A,A+n);
		int maxi=1;
		int dem=1;
		for(int i=1;i<n;i++){
			if(A[i]-A[i-1]<=k){
				dem++;
				maxi=max(dem,maxi);
			}else{
				dem=1;
			}
		}
		long long ans=n-maxi;
		cout<<ans<<"\n";
	}
}
