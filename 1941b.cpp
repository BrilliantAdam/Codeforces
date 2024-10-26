#include <bits/stdc++.h>
using namespace std;
const int N = 2e5;
int t;
int n;
int a[N + 5];
int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
		for (int i = 1; i <= n - 2; i++) {
			if (a[i] < 0) {
				puts("NO");
				goto ed;
			}
			a[i + 1] -= a[i] << 1, a[i + 2] -= a[i];
		}
		puts(a[n - 1] || a[n] ? "NO" : "YES");
		ed:;
	}
	return 0;
}
