//============================================================================
// Author      : brilliantadam
// Date        : 10/6/2024
// Description : https://codeforces.com/contest/1883/submit
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a[4] = {0};
	string m;
	cin >> n;
	for(int i=0; i<n; i++){
		int sum =0 , tmp =1;
		cin >> m;
		for(int j=0; j<4; j++){
			a[j] = m[j] - 48;
			if(a[j] ==0)
				a[j] = 10;
		}
		for(int i=0; i <4; i++){
			sum += abs(a[i] - tmp) + 1;
			tmp = a[i];
		}
		cout << sum << endl;
	}
	return 0;
}
