#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,x,m;
	cin>>n;
	vector<int> a[3];
	for(int i=1;i<=n;i++){
		cin>>x;
		a[x-1].push_back(i);
	}
	m=min(a[0].size(),min(a[1].size(),a[2].size()));
	cout<<m<<endl;
	for(int i=0;i<m;i++)
		cout<<a[0][i]<<" "<<a[1][i]<<" "<<a[2][i]<<endl;
	return 0;
}
