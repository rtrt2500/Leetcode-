class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     int b = 0;
     for(int a=0; a<nums.size();a++) {
        if(nums[a]!= val){
            nums[b]=nums[a];
            b++;
        }
     }
     return b;  
    }
};