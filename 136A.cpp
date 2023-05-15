//Author: Ahmed Refaat 
 
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
 
const string alphabet = "abcdefghijklmnopqrstuvwxyz";
 
int main(){
	int n , b;
	scanf("%d" , &n);
	int a[n];
	for(int i=0; i<n; i++){
		cin >> b;
		a[b] = i+1;
		
	}
	
	for(int i=1; i<=n ; i++){
		cout << a[i] << " ";
	}
	return 0;
}