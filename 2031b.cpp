#include<bits/stdc++.h>
using namespace std;
int a,b,as[200001];
 
int main()
{
	cin>>a;
	for(int i=1,can=1;i<=a;i++,can=1)
	{
		cin>>b;
		for(int j=1;j<=b;j++)
		{
			cin>>as[j];
		}
		for(int j=1;j<b;j++)
		{
			if(as[j]-as[j+1]==1)swap(as[j+1],as[j]);
			if(as[j]!=j)
			{
				can=0;
				break;
			}
		}
		if(can)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
