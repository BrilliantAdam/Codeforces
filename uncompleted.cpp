//https://codeforces.com/contest/1883/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    string originalString = "radcar";
    stringstream ss(originalString);
    string firstPart, secondPart;
    
    getline(ss, firstPart, 'c');
    getline(ss, secondPart);
    reverse(secondPart.begin(), secondPart.end()); 
    cout << "First part: " << firstPart << endl;
    cout << "Second part: " << secondPart << endl;
    if(firstPart == secondPart){
        cout << "Yes";
    }
    else{
        cout << "NO";
    }

    return 0;
}
