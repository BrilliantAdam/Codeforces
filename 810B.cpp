//=====================================================
// Author      : BrilliantAdam
// Date        : 2024-07-06 22:10:17
// Description : Junior Training Sheet V7.0
// Problem Code: 810B
// Problem Name: B_Summer_sell_off
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0); long long sum {0};
    multimap<int,int> myMap;
    int n , f;
    cin >> n >> f;
    int a[n] , b[n] , products[n];
    for(int i=0; i<n; ++i){
        cin >> a[i] >> b[i];
        products[i] = a[i] - b[i];
        if(a[i] != 0){
            myMap.insert({products[i] , i});
        }
    }
    for(auto &pair : myMap){
        if(f!=0){
            f--;
            sum += (min(abs(2*a[pair.second]), b[pair.second]));
        }
        else{
            sum += (min(abs(a[pair.second]), b[pair.second]));
        }
    }
    cout << sum;
    return 0;
}



//chatgpt code
//check later

//=====================================================
// Author      : BrilliantAdam
// Date        : 2024-07-06 22:10:17
// Description : Junior Training Sheet V7.0
// Problem Code: 810B
// Problem Name: B_Summer_sell_off
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0); 
    long long sum = 0;
    multimap<int, int> myMap;
    int n, f;
    cin >> n >> f;
    vector<int> a(n), b(n), products(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
        products[i] = min(2 * a[i], b[i]) - min(a[i], b[i]);
        myMap.insert({products[i], i});
    }
    
    // Sorting the map by the value difference in descending order
    vector<pair<int, int>> sortedProducts(myMap.rbegin(), myMap.rend());

    for (const auto& pair : sortedProducts) {
        int idx = pair.second;
        if (f > 0) {
            sum += min(2 * a[idx], b[idx]);
            --f;
        } else {
            sum += min(a[idx], b[idx]);
        }
    }

    cout << sum;
    return 0;
}
