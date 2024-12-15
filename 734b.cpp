#include<iostream>
using namespace std;
 
int main(){
	long long a, b, c, d, x;
	cin >> a >> b >> c >> d;
	
	x = min(a, c);
	x = min(x, d);
	cout << x * 256 + 32 * min(a-x, b);
	
	return 0;
}
