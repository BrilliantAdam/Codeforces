//brilliantadam
//7/6/2024
//Switch can't be used with strings, only works with integers!
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum {0};
    cin >> n;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        if(s == "Tetrahedron")
            sum +=4;
        else if(s == "Cube")
            sum += 6;
        else if(s == "Octahedron")
            sum += 8;
        else if(s == "Dodecahedron")
            sum += 12;
        else
            sum += 20;
    }
    
    cout << sum;
    return 0;
}
