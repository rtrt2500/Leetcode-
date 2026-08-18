#include <vector>
#include <algorithm>

class Solution {
public:
    int maxSubarraySumCircular(std::vector<int>& nums) {
        int a = 0;
        int b = 0;
        int c = 0;
        int d = nums[0];
        int e = nums[0];
        
        for (int num : nums) {
            a += num;
            b = std::max(b + num, num);
            d = std::max(d, b);
            c = std::min(c + num, num);
            e = std::min(e, c);
        }
        
        if (d < 0) {
            return d;
        }
        
        return std::max(d, a - e);
    }
};
