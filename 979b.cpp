#include<bits/stdc++.h>
using namespace std;
int k,i,n,t;
string s;
int main(){
	cin>>n>>s;
	for(i=0; i<n; i++)	{
		if(s[i]=='x' and s[i+1]=='x' and s[i+2]=='x')
		k++;
	}
	cout<<k;
}
