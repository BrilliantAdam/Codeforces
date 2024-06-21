#include<bits/stdc++.h>
using namespace std;
long long t,n;
long long a[200000+5],b[200000+5];
bool q[200000+5],p[200000+5];
long long gcd(long long x,long long y)
{
	if(y==0) return x;
	return gcd(y,x%y);
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(long long i=1;i<=n;i++)
		{
			cin>>a[i];
			if(i>1)
			{
				b[i-1]=gcd(a[i],a[i-1]);
			}
		}
		q[0]=1,p[n]=1;
		for(long long i=1;i<=n-1;i++)
		{
			q[i]=q[i-1]&(b[i]>=b[i-1]);
		}
		p[n-1]=1;
		b[n]=2e9;
		for(long long i=n-2;i>=1;i--)
		{
			p[i]=p[i+1]&(b[i]<=b[i+1]);
		}
		//cout<<q[2]<<' '<<p[5]<<"\n";
		bool flag=0;
		if(q[n-2]||p[2]) flag=1;
		for(long long i=2;i<n;i++)
		{
			long long x=gcd(a[i-1],a[i+1]);
			if(q[i-2]&&p[i+1]&&x>=b[i-2]&&x<=b[i+1]) flag=1;
		}
		if(flag) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
