#include <bits/stdc++.h>
using namespace std;
int t,n,x;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[60]={0};
		for(int i=0;i<2*n;i++)
		{
    		cin>>x;
    		a[x]++;
    		if(a[x]==2)
    			cout<<x<<" ";
		}
		cout<<endl;
	}
}
