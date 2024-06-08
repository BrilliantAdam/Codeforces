//brilliantadam
//8/6/2024
//countUniqueNumbers function
#include <bits/stdc++.h>
using namespace std;
int countUniqueNumbers(const std::string& str) {
    std::unordered_set<char> uniqueNumbers;

    // Iterate through the string and add unique numbers to the set
    for (char c : str) {
        if (std::isdigit(c)) {  // Check if the character is a digit
            uniqueNumbers.insert(c);
        }
    }

    // Return the size of the set, which represents the count of unique numbers
    return uniqueNumbers.size();
}
int main()
{
    int n, k , sum {0};
    string s;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> s;
        if(countUniqueNumbers(s) == (k +1))
            sum +=1;
    }
    cout << sum;
    return 0;
}
