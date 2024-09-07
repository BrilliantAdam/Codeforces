#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,y;
	cin>>y;
	do{
	    y++; 
	    a=y%10;
	    b=y/10%10;
	    c=y/100%10;
	    d=y/1000;
	}
	while(a==b||a==c||a==d||b==c||b==d||c==d);
	cout<<y;
}
