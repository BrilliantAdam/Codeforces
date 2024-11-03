#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> nums(n);
		bool f=true;
		for(int i=0;i<n;i++)cin>>nums[i];
		for(int i=1;i<n;i++){
			if(nums[i]!=0 && nums[i-1]-nums[i]>=0){
				cout<<-1<<endl;
				f=false;
				break;
			}
			nums[i]=nums[i]+nums[i-1];
		}
		if(f){
			for(int i:nums)cout<<i<<" ";
			cout<<endl;
		}
	}
}
