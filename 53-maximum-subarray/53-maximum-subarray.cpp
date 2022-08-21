class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum,currmax;
        maxsum=nums[0];
        currmax = nums[0];
        for(int i=1;i<nums.size();i++){
            currmax= max(nums[i],nums[i]+currmax);
            maxsum = max(maxsum,currmax);
        }
        return maxsum;
    }
};