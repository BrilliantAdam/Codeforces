//brilliantadam
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1]={0};
		for(int i=1;i<=n;i++){
		  cin>>a[i];  
		}
		
		
		int j=n;
		
	
			while(j>1 && a[j-1]>=a[j])
			j--;
			
			while(j>1 && a[j-1]<=a[j])
			j--;
		
		cout<<j-1<<"\n";
			
	}
	return 0;
}
