//brilliantadam
//https://leetcode.com/problems/substring-with-concatenation-of-all-words/description/
//9/6/2024
#define pb push_back
const int MOD = 1e9 + 7;
const int st = 2137;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        unordered_map<string, int> wordCount;
        int wordLen = words[0].size();
        int totalLen = wordLen * words.size();
        int n = s.size();
        
        // Count occurrences of each word
        for (string word : words)
            wordCount[word]++;
        
        for (int i = 0; i < wordLen; i++) {
            unordered_map<string, int> temp;
            int count = 0;
            for (int j = i; j + wordLen <= n; j += wordLen) {
                string word = s.substr(j, wordLen);
                
                // If word is not present in words list, reset temp and count
                if (!wordCount.count(word)) {
                    temp.clear();
                    count = 0;
                } else {
                    temp[word]++;
                    count++;
                    while (temp[word] > wordCount[word]) {
                        string leftWord = s.substr(j - (count - 1) * wordLen, wordLen);
                        temp[leftWord]--;
                        count--;
                    }
                    if (count == words.size())
                        ans.pb(j - (count - 1) * wordLen);
                }
            }
        }
        return ans;
    }
};
