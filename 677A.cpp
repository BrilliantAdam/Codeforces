//brilliantadam
//30/5/2024
#include<iostream>
using namespace std;
int n,m,a,s;
main() {
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>a,s+=a>m?2:1;
	cout<<s;
}
