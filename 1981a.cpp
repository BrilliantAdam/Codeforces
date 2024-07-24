#include<bits/stdc++.h>
using namespace std;
 
int numTests, leftBound, rightBound;
 
int main()
{
    cin >> numTests;
    while (numTests--) {
        cin >> leftBound >> rightBound;
        int answer = 0;
        while (rightBound > 1) {
            rightBound >>= 1;
            answer++;
        }
        cout << answer << endl;
    }
}
