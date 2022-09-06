class Solution {
public:
    void back(vector<vector<int>>& ans, vector<int>& row , int k , int n , int ind)
    {
        if(row.size()>k || n<0){
           return;}
        
        if(row.size()==k && n==0){
            ans.push_back(row);
            return;
        }
        
        
        for(int i=ind ; i<=9; i++){
            // if(i>n){
            //     break;
            // }
            row.push_back(i);
            back(ans,row,k,n-i,i+1);
                row.pop_back();
        }
        
        
        
    }  
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> row;
        
        back(ans,row,k,n,1);
        return ans;
    }
};