#include <bits/stdc++.h>
using namespace std;
int a[200010];
int main()
{
    ios::sync_with_stdio(0);
    int t, n, tmp;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        memset(a, 0, sizeof(a));
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> tmp;
            if (i + tmp > n)
                ans = max(ans, a[i] + tmp);
            else
                a[i + tmp] = max(a[i + tmp], a[i] + tmp);
        }
        for (int i = 1; i <= n; i++)
            ans = max(ans, a[i]);
        cout << ans << endl;
    }
    return 0;
}
