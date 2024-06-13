//brilliantadam
//14/6/2024
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        // Start with the first string in the array as the initial prefix
        string prefix = strs[0];
        
        // Iterate through the rest of the strings
        for (int i = 1; i < strs.size(); ++i) {
            // Compare the current prefix with the current string
            while (strs[i].find(prefix) != 0) {
                // Shorten the prefix by one character at a time
                prefix = prefix.substr(0, prefix.size() - 1);
                
                // If the prefix becomes empty, there is no common prefix
                if (prefix.empty()) return "";
            }
        }
        
        return prefix;
    }
};
