#include <vector>
#include <queue>

class Solution {
public:
    int minKBitFlips(std::vector<int>& nums, int k) {
        int flips = 0;
        std::queue<int> flipPositions; 

        for (int i = 0; i < nums.size(); ++i) {
            if (!flipPositions.empty() && flipPositions.front() <= i - k) {
                flipPositions.pop();
            }

            if (flipPositions.size() % 2 == nums[i]) {
                if (i + k > nums.size()) {
                    return -1;
                }

                flipPositions.push(i);
                flips++;
            }
        }
        
        return flips;
    }
};
