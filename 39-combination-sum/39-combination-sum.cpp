class Solution {
public:
    void dfs(vector<int>& candidates, int target,vector<vector<int>>& ans, vector<int>& row,int sum,int i){
        if(sum==target){
            ans.push_back(row);
            return;
        }
        if(sum>target || i>=candidates.size()){
            return;
        }
        
        
        
        row.push_back(candidates[i]);
        dfs(candidates,target,ans,row,sum+candidates[i],i);
        
        row.pop_back();
        dfs(candidates,target,ans,row,sum,i+1);
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> row;
        dfs(candidates,target,ans,row,0,0);
        
        return ans;
        
        
    }
};