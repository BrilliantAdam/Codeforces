//brilliantadam
//https://leetcode.com/problems/magnetic-force-between-two-balls/description/
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int left = 1, right = position.back() - position.front();
        
        while (left < right) {
            int mid = right - (right - left) / 2;
            if (canPlaceBalls(position, m, mid)) {
                left = mid;
            } else {
                right = mid - 1;
            }
        }
        return left;
    }
    
private:
    bool canPlaceBalls(const vector<int>& position, int m, int minDist) {
        int count = 1, lastPos = position[0];
        for (int i = 1; i < position.size(); ++i) {
            if (position[i] - lastPos >= minDist) {
                ++count;
                lastPos = position[i];
                if (count == m) return true;
            }
        }
        return false;
    }
};
