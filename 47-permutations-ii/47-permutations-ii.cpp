class Solution {
public:
    set<vector<int>> s;
    void solve(int ind,vector<int>&nums){
        if(ind==nums.size()){
            s.insert(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            solve(ind+1,nums);
            swap(nums[ind],nums[i]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        solve(0,nums);
        for(auto i:s)ans.push_back(i);
        return ans;
    }
   // vector<vector<int>> permuteUnique(vector<int>& nums) {
        
   // }
};