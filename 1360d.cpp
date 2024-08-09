#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int res = n;
		for (int i=1; i*i<=n; i++) {
			if (n%i==0) {
				if (i<=k) res = min(res, n/i);
				if (n/i<=k) res = min(res, i);
			}
		}
		cout << res << endl;
	}
	return 0;
}
