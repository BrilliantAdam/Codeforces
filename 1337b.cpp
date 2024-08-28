#include <iostream>
using namespace std;
int main () {
	int t;
	cin >> t;
	while (t--) {
		int x, n, m;
		cin >> x >> n >> m;
		while (n > 0 && (x+1)/2 > 10) {
			x = x/2+10;
			n--;
		}
		x -= 10*m;
		cout << (x<=0?"YES":"NO") << endl;
	}
}
