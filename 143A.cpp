//brilliantadam
//12/6/2024
//Hard Brute Forcing
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r1,r2,c1,c2,d1,d2,b,c,d;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    for(int a=1; a<=9; a++){
        d = d1 - a;
        c = r2 - d;
        b = c2 -d;
        if(a+b == r1 && c + d == r2 && a + c == c1 && b + d == c2 && a + d == d1 && b + c == d2){
            if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d&&b<=9&&c<=9&&d<=9&&b>0&&c>0&&d>0)
			{
				cout<<a<<" "<<b<<endl<<c<<" "<<d;
				return 0;
			}	
        }
    }
    cout << -1;
    return 0;
}
