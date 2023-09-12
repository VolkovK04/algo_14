#include <vector>;

using namespace std;

class Solution {
public:
    bool inline canJump(vector<int>& nums) {
        int maxIndex = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i > maxIndex)
                return false;
            if (i + nums[i] > maxIndex) {
                maxIndex = i + nums[i];
                if (maxIndex >= nums.size())
                    return true;
            }
        }
        return true;
    }

    int inline maxProfit(vector<int>& prices) {
        int sum = 0;
        for (int i = 1; i < prices.size(); i++)
            if (prices[i] > prices[i - 1])
                sum += prices[i] - prices[i - 1];
        return sum;
    }
};