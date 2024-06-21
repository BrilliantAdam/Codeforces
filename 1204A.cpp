#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int n = s.size();
	for(int i = n; i > 0; i--)
	if(s[i] == '1'){
		n++;
		break;
	}
	cout << n / 2;
}
