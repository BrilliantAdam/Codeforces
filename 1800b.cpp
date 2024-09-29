#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll t;
    cin>>t;
    while(t--){
        string s;
	int n, k;
	cin >> n >> k >> s;
	int cnt[1000] = {0};
	for(int i = 0; i < n; i++){
		cnt[s[i]]++; 	
	}
	int ans = 0, total = 0;
	for(int i = 'a'; i <= 'z'; i++){
		ans += min(cnt[i], cnt[i + 'A' - 'a']);
		total += abs(cnt[i] - cnt[i + 'A' - 'a']) / 2;
	}
	cout << ans + min(total, k) << "\n";
}
    
 
    return 0;
}
