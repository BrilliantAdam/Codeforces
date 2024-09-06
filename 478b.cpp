#include<iostream>
using namespace std;
int main()
{
	long long n, m, k, kk;
	cin>>n>>m;
	k=n/m, kk=n%m, k=((k-1)*(m-kk)+(k+1)*kk)*k/2;
	n-=m-1, m=n*(n-1)/2;
	cout<<k<<' '<<m;
        return 0;
}
