//brilliantadam
//15/6/2024
//With Assistance to learn something new
//learned abt c_str() => It's necessary for fixing the format of std::string for the 'printf' function, since it only expects 'char *' 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
	getline(cin, a, '|');
	getline(cin, b);
	char ch;
	while (scanf(" %c", &ch) == 1)
		if (a.length() <= b.length()) a += ch;
		else b += ch;
	if (a.length() == b.length())
		printf("%s|%s\n", a.c_str(), b.c_str());
	else printf("Impossible\n");
	return 0;
}
