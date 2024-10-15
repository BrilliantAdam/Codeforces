#include <iostream>
using namespace std;
int main(){
	int t,n,max=0,c=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>t;
		if(t>max){
			max=t;
		}
		c+=t;
	}
	cout<<max*n - c;
	return 0;
}
