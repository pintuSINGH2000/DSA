// Distribute Candies Among Children I
// You are given two positive integers n and limit.

// Return the total number of ways to distribute n candies among 3 children such that no child gets more than limit candies.

//check all possiblities
// by runnig three loop
class Solution {
public:
    int distributeCandies(int n, int limit) {
        int ans = 0;

        for (int i = 0; i <= limit; ++i) {
            for (int j = 0; j <= limit; ++j) {
                int candies = n - i - j;

                if (candies >= 0 && candies <= limit) {
                    ans++;
                }
            }
        }

        return ans;
    }
};

TC(limit*limit);
SC(1)
 