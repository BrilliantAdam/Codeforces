// Author : Ahmed Refaat 
// Not best algorithm 
#include <bits/stdc++.h>
using namespace std;
 
int countOccurrences(int arr[], int n, int x)
{
    int res = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
          res++;
    return res;
}
 
bool isThere(int arr[], int n, int x){
	bool res = false;
	for(int i=0; i<n; i++){
		if(x == arr[i]){
			res = true;
			return res;
			break;
		}
	}
	return res;
}
 
int gcd(int a , int b){
	int res {0} , r {0};
	r = a % b;
	while(r != 0){
		res = a/b;
		r = a % b;
		a = b;
		if( r!= 0){
			b = r;
		}
		
		
	}
	return b;
}
 
int main(){
	int t , n , b , res;
	
	cin >> t;
 
	while(t--){
		cin >> n;
 
		int a[n];
		
		for(int i=0; i<n; i++){
			cin >> a[i];
			
		}
		int l = sizeof(a) / sizeof(a[0]);
		sort(a, a + l, greater<int>());
		
		res = a[0] - a[1];
		if(n==1){
			if(a[0] >1){
				cout << "No" << endl;
				continue;
			}
		}
		if(res>1){
			cout << "NO" << endl;
		}
		
		else{
			cout << "YES" << endl;
		}
		
		
	}
	return 0;
}