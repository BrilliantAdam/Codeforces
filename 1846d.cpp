#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int a,b,c;
		double sum=0;
		cin>>a>>b>>c;
		long long m[a];
		for(int i=0;i<a;i++){
			cin>>m[i];
		}
		sum=a*0.5*b*c;
		for(int i=0;i<a;i++){
			if(i!=0){
				if((m[i]-m[i-1])<c){
					sum-=(c-m[i]+m[i-1])*(c-m[i]+m[i-1])*0.5*b/c;
				}
			}
		}
		printf("%.7f\n",sum);
	}
}
