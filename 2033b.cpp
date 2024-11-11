#include <bits/stdc++.h>
using namespace std;
int main(){
 
	int tt; cin >> tt;
	while(tt--){
		int n; cin >> n;
		vector<int> d(2*n-1, INT_MAX);
		
 
		for(int i = n-1; i >= 0; i--)
			for(int j = 0; j < n; j++){
				int temp;
				cin >> temp;
				if(temp < d[i+j]) d[i+j] = temp;
			}
 
		int64_t sum = 0;
		for(int &it: d)
			if(it < 0) sum += -it;
 
		cout << sum << endl;
	}
	return 0;
}
