#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int n, m, x;
	cin >> n >> m;
	int a[n], ans[n+1];
	set<int> s;
	for (int i=0; i<n; i++) cin >> a[i];
 
	for (int i=n-1; i>=0; i--)
	{
		s.insert(a[i]);
		ans[i+1] = s.size();
	}
 
	for (int i=0; i<m; i++)
	{
		cin >> x;
		cout << ans[x] << endl;
	}
}
