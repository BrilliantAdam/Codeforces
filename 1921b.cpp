#include<bits/stdc++.h>
using namespace std;
string q,w;
int a,s;
int main()
{
	cin>>a;
	while(a--)
	{
		cin>>s>>q>>w;
		int sum=0,ans=0;
		for(int i=0;i<s;i++)
		{
			if(q[i]!=w[i])sum++;
			ans=ans+(q[i]-w[i]);
		}
		if(ans<0)ans=-ans;
		cout<<ans+(sum-ans)/2<<endl;
	}
	return 0;
}
