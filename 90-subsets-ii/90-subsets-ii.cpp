class Solution {
public:
      //set<vector<int>> s;
      void dfs(vector<int>& nums, vector<vector<int>>& ans , vector<int>& subset, int i){
        if(i==nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
          dfs(nums ,ans, subset , i+1);
        subset.pop_back();
        
          while((i+1)<nums.size()&& nums[i]==nums[i+1]){
              i+=1;
          }
          dfs(nums ,ans, subset , i+1);
    }
    
    
    
   vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        vector<int> subset;
        dfs(nums ,ans, subset , 0);
            // for(auto i:s){
            //     ans.push_back(i);
            // }
        return ans; 
    }
};