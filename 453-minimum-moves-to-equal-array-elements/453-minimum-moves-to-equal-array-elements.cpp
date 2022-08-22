class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int c=0;
        for(int i=n-1;i>=0;i--){
            c+=nums[i]-nums[0];
        }
        return c;
    }
};