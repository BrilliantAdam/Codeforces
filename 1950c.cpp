#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        int hours, minutes;
        char separator;
        cin >> hours >> separator >> minutes;
        
        string period = (hours >= 12) ? "PM" : "AM";
        hours = hours % 12 == 0 ? 12 : hours % 12;
        
        cout << setw(2) << setfill('0') << hours << ":"
             << setw(2) << setfill('0') << minutes << " " << period << endl;
    }
    
    return 0;
}
