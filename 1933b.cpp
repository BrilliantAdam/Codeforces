#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (; t > 0; t--)
	{
		int a,b,c=0,d=0;
		cin>>a;
		for(int i=0;i<a;i++){
			cin>>b;
			d+=b;
			d%=3;
			if(b%3==1){
				c++;
			}	
		}
		if(d!=0 and a==1){
			cout<<1<<endl;
		}
		else if(d==1 and c==0){
			cout<<2<<endl;
		}
		else if(d!=0){
			cout<<1<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}
}
