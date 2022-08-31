class Solution {
public:
    void dfs(vector<int>& nums,vector<vector<int>>& ans , vector<int>& subset, int i){
        if(i>=nums.size()){
            ans.push_back(subset);
            return;
        }
        
        subset.push_back(nums[i]);
          dfs(nums , ans , subset , i+1);
        
        subset.pop_back();
        dfs(nums , ans , subset , i+1);
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        
        vector<int> subset;
        dfs(nums , ans , subset , 0);
            
        return ans; 
    }
};