#include<bits/stdc++.h>
using namespace std;
long long x,y,n;
string s;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		string s1=s;
		s=s+s[0];
		s.erase(0,1);
		if(s1!=s)
		cout<<"YES"<<endl<<s<<endl;
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
