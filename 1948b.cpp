#include<bits/stdc++.h>
using namespace std;
 
const int N=55;
int n,a[N];
 
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		bool flag=1;
		for(int i=1;i<=n;i++){
			cin >> a[i];
			if(a[i]>=10&&a[i]/10>=a[i-1]&&a[i]%10>=a[i]/10){
				a[i]=a[i]%10;
			}
			else{
				if(a[i]<a[i-1]){
					flag=0;
				}
			}
		}
		if(flag)cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
