#include<iostream>
using namespace std;
int main() {
	int t; 
	cin >> t;
	while (t--) {
		long long n, sum{};
		cin >> n;
		while (n) {
			sum += n;
			n /= 2;
		}
		cout << sum << endl;
	}
}
