#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int t;
	cin>>t;
	while(t--){
		long long int n,len,x,sum=0,k,i,j;
		cin>>n;
 
		long long int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		
		i=0,j;
		while(i<n){
			j=i,x=LONG_LONG_MIN;
			while(j<n && a[j]*a[i]>0)
			x=max(x,a[j]),j++;
			
			sum+=x;
			i=j;
		}
		cout<<sum<<endl;
	}
	return 0;
}
