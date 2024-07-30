//https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/
class Solution {
public:
    int minimumDeletions(string s) {
        // <a> <b>
        // aababbab
        // aaabbb - 2
        // aabbbb - 2
        // Every element to the left should to be a and every element to the right should be b.
        // <a>x<b>
        // Count the number of b's to the left side of x + count the number of a's to the right side of x
        int aCount = 0;
        for(auto &ch : s) aCount += (ch == 'a');
        int minDeletions = INT_MAX;
        int bCount = 0;
        for(auto &ch : s){
            aCount -= (ch == 'a');
            minDeletions = min(minDeletions, aCount + bCount);
            bCount += (ch == 'b');
        }
        return minDeletions;
    }
};
