
#include<bits/stdc++.h>
using namespace std;
int a[200000];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int c=0;
		for(int i=2;i*i<n&&c<2;i++){
			if(n%i==0){
 
				a[c++]=i;
				n/=i;
			}
		}
		if(c<2) puts("NO");
		else {
		 puts("YES");
		 cout<<a[0]<<' '<<a[1]<<' '<<n<<'\n';
	}
}
		
		
}
