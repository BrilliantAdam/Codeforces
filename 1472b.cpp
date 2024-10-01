#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, C, a, b;
	cin>>t;
	while(t--){
		a = b = 0;
		cin >> n;
		while(n--){
			cin >> C;
			(C==1?a++:b++);
		}
		if (a % 2 == 0 && (b % 2 == 0 || a >= 2)) {
         cout << "YES" << endl;
         }
        else {
        cout << "NO" << endl;
        }

	} 	
	return 0;
}
