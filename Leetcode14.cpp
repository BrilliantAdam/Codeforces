//https://leetcode.com/problems/filling-bookcase-shelves/
class Solution {
public:        
    vector<int> memo;
    
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        int n = books.size();
        memo.resize(n, -1);
        return solve(books, shelfWidth, 0);
    }

    int solve(vector<vector<int>>& books, int shelfWidth, int ind) {
        if (ind == books.size()) return 0;
        if (memo[ind] != -1) return memo[ind];
        
        int ans = INT_MAX, maxH = 0, width = 0;
        for (int i = ind; i < books.size(); ++i) {
            width += books[i][0];
            if (width > shelfWidth) break;
            maxH = std::max(maxH, books[i][1]);
            ans = std::min(ans, maxH + solve(books, shelfWidth, i + 1));
        }
        
        return memo[ind] = ans;
    }
};
