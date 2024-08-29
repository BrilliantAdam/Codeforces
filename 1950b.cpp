#include <bits/stdc++.h>
using namespace std;
int t,n;
int main() {
	cin>>t;
	while (t--){
		cin>>n;
		for (int i=1; i<=2*n; i++){
			for (int j=1; j<=2*n; j++){
				if (((i+1)/2+(j+1)/2)%2==0) cout<<'#';
				else cout<<'.';
			}
			cout<<'\n';
		}
	}
}
