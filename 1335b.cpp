#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n >> a >> b;
		for(int i=0;i<n;i++)
			cout<<char('a'+ i%b);
		cout<<"\n";
	}
	return 0;
}
