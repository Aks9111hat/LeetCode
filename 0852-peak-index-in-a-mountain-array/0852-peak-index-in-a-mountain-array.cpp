class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int ans;
        if(nums.size()==1){
            return 0;
        }
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]<nums[i]){
                ans=i;
            }
        }
        return ans;
    }
};