// //brilliantadam
// //8/6/2024
// //countUniqueNumbers function
// #include <bits/stdc++.h>
// using namespace std;
// int countUniqueNumbers(const std::string& str) {
//     std::unordered_set<char> uniqueNumbers;

//     // Iterate through the string and add unique numbers to the set
//     for (char c : str) {
//         if (std::isdigit(c)) {  // Check if the character is a digit
//             uniqueNumbers.insert(c);
//         }
//     }

//     // Return the size of the set, which represents the count of unique numbers
//     return uniqueNumbers.size();
// }
// int main()
// {
//     int n, k , sum {0};
//     string s;
//     cin >> n >> k;
//     for(int i=0; i<n; i++){
//         cin >> s;
//         if(countUniqueNumbers(s) == (k +1))
//             sum +=1;
//     }
//     cout << sum;
//     return 0;
// }

//brilliantadam
//8/6/2024
//Frequency array
//Traversing through all digits of a number
//My mistake was: I didn't know it's okay to have numbers exceeding k
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k , a  , sum {0};
    bool flag {1};
    cin >> n >> k;
    for(int i=0; i<n; i++){
        int frq[10] {0};
        cin >> a;
        while(a>0){
            frq[a%10] = 1;
            a /= 10;
        }
        for(int j=0; j <= k; j++){
            if(frq[j] == 0){
                flag = 0;
            }
        }
        if(flag == 1)
            sum += 1;
        flag =1;
    }
    cout << sum;
    return 0;
}
