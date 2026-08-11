
        class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;          
        int sum = 0;
        int minLength = INT_MAX;

        for (int k = 0; k < nums.size(); k++) {   

            sum += nums[k];

            while (sum >= target) {

                minLength = min(minLength, k - i + 1);

                sum -= nums[i];

                i++;
            }
        }

        if (minLength == INT_MAX)
            return 0;

        return minLength;
    }
};
    
