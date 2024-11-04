#include<bits/stdc++.h>
#define int long long
using namespace std;
 
int32_t main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		string s;
		cin >> n >> s;
		set<char> st;
		for(char c : s) st.insert(c);
		vector<int> a;
		for(char c : st) a.push_back(c);
		int i=0, j=a.size()-1;
		map<char, char> mp;
		while(i<(int)a.size()){
			mp[a[i]] = a[j];
			i++;
			j--;
		}
		string ans = s;
		for(char &c : ans){
			c = mp[c];
		}
		cout << ans << '\n';
	}
}
