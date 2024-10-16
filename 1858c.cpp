#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n,i,j;
		cin>>n;
		for(i=1;i<=n;i+=2)
		{
			for(j=i;j<=n;j*=2)
				cout<<j<<" ";
		}
		cout<<"\n";
	}
}
