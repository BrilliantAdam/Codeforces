#include <iostream>

using namespace std;

int main() {
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		string s;
		cin >> n >> s;
		string t = "";
		for(int i=n-1; i>=0; --i) {
			int x = 0;
			if(s[i] == '0') {
				--i;
				x += (s[i] - '0');
				--i;
				x += 10 * (s[i] - '0');
			}
			else {
				x += (s[i] - '0');
			}
			t = string(1, 'a' + x - 1) + t;
		}
		cout << t << '\n';
	}
	return 0;
}

