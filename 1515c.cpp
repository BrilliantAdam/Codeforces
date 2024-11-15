#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m, x; cin >> n >> m >> x;
        cout << "YES" << endl;
        set<pair<int, int>> s;
        for(int i = 1; i <= m; i++) s.insert({0, i});
        
        for(int i = 0; i < n; i++)
        {
            int a; cin >> a;
            auto u = *s.begin();
            cout << u.second << " ";
            s.erase(u);
            s.insert({u.first + a, u.second});
        }
        cout << endl;
    }
}
