#include <bits/stdc++.h>
#define  ll long long 
using namespace std;
 
 
int main()
{
	int n;
	cin>>n;
	pair<int,int> p[n];
	for (int i = 0; i < n; ++i){
		cin>>p[i].first>>p[i].second;
	}
	sort(p,p+n);
	int mx=1;
	for (int i = 0; i < n; ++i){
		if(p[i].second<mx){
			mx=p[i].first;
		}
		else
			mx=p[i].second;
	}
	cout<<mx;
	return 0;
}
