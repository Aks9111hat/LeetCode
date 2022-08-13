class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int p=0;
        for(int i=0 ; i<nums.size();i++){
            p+=nums[i];
            ans.push_back(p);
            
        }
        return ans;
    }
};