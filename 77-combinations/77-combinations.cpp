class Solution {
public:
    void dfs(vector<vector<int>>& ans,vector<int>& comb ,int n, int a , int k ){
        
        if(comb.size()==k){
            
            ans.push_back(comb);
            return;
        }
        
        for(int i = a; i<=n; i++){
            comb.push_back(i);
            dfs(ans,comb,n,i+1,k);
            comb.pop_back();
        }
        
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> comb;
        dfs(ans,comb,n,1,k);
        return ans;
    }
};