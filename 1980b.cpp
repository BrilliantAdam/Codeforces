#include<bits/stdc++.h>
using namespace std;
 
int a[105];
int main(){
	int n,f,T,k,x;
	char c;
	cin>>T;
	while(T--){
		cin>>n>>f>>k;
		int ne(0),nl(0);
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			if(a[i]>a[f]){
				nl++;
			}
			else if(a[i]==a[f]){
				ne++;
			}
		}
		if(nl>=k){
			cout<<"NO"<<endl;
		}
		else if(nl+ne>k){
			cout<<"MAYBE"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
return 0;
}
