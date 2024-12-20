#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, j, k;
		cin >> n >> m >> k;
		set<int> x, y, z;
		for (j = 0; j < n; j++)
		{
			int p;
			cin >> p;
			if (p <= k)
			{
				x.insert(p);
				z.insert(p);
			}
		}
		for (j = 0; j < m; j++)
		{
			int p;
			cin >> p;
			if (p <= k)
			{
				y.insert(p);
				z.insert(p);
			}
		}
		if (z.size() == k && x.size() >= k / 2 && y.size() >= k / 2)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
