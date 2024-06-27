//brilliantadam
//27/6/2024
//Learned multimap: > map that could have same key multiple times
//Learned how to traverse maps in opposite direction.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, s = 0, s2 = 0;
    cin >> n >> m;
    int a, b;
    multimap<int, int> arr;
    while (m--) {
        cin >> a >> b;
        arr.insert(pair<int, int>(b, a));
    }
    
    for (auto p = arr.crbegin(); p != arr.crend(); ++p) {
        if (n < p->second) {
            s2 += n * p->first;
            break;
        }
        s2 += p->second * p->first;
        n -= p->second;
    }
    cout << s2;
    return 0;
}
