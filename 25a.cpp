#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,d0=0,d1=0,x,y;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int z;
		cin>>z;
		if(z%2)
			d1++,y=i+1;
		else
			d0++,x=i+1;
	}
	if(d1>d0)
		cout<<x;
	else
		cout<<y;
}
