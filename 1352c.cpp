#include <iostream>
using namespace std;
 
int main(){
	int n, k, t;
	cin >> t;
	while (t--){
		cin >> n >> k;
		cout << k + (k-1)/(n-1) << endl;
	}
	return 0;
}
