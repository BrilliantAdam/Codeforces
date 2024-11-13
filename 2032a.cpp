#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n ;
	cin >>n;
	int x;
	int sum=0;
	for(int i = 0 ; i < 2*n ; i++)
	{
		cin >> x;
		sum+=x;
	}
	cout << sum%2 << " " << sum - 2*max(0, sum-n) << "\n";
	}
	return 0;
}
