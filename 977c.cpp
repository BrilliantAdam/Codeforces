#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n,k;
	cin>>n>>k;
	int A[n];
	for (int i=0; i<n; i++){
		cin>>A[i];
	}
	sort(A, A + n);
	if(k == 0){
		if(A[0] == 1)	cout<<"-1";
		else cout<<A[0] - 1;
	}
	else if(k > 0){
		if(A[k] - A[k - 1] == 0)	cout<<"-1";
		else cout<<	A[k - 1];
	}
}
