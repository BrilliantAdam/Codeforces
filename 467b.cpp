#include <bits/stdc++.h>
using namespace std;
int i,n,m,p,k,a[1001];
int main() {
	cin>>m>>m>>k;
	for(;i<=m;i++)cin>>a[i];
	for(i=0;i<m;i++){
	    a[i]^=a[m];p=0;
	    while(a[i]>0){
	        p+=(a[i]&1);
	        a[i]>>=1;
	    }
	    if(p<=k)n++;
	}
	cout<<n;
}
