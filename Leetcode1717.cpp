class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int score = 0;
        char firstChar, secondChar;
        int firstPoints, secondPoints;
        
        if (x > y) {
            firstChar = 'a'; secondChar = 'b';
            firstPoints = x; secondPoints = y;
        } else {
            firstChar = 'b'; secondChar = 'a';
            firstPoints = y; secondPoints = x;
        }
        auto removePattern = [&](char a, char b, int points) {
            string temp;
            int tempScore = 0;
            for (char c : s) {
                if (!temp.empty() && temp.back() == a && c == b) {
                    temp.pop_back();
                    tempScore += points;
                } else {
                    temp.push_back(c);
                }
            }
            s = temp;
            return tempScore;
        };

        score += removePattern(firstChar, secondChar, firstPoints);
        score += removePattern(secondChar, firstChar, secondPoints);
        
        return score;
    }
};
