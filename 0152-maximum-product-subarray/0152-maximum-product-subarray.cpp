class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long ans = nums[0];
        long long prod = 1;
        
        for(int i=0;i<nums.size();i++){
            prod = prod*nums[i];
            
            if(prod>ans){
                ans = prod;
            }
            
            if(prod==0){
                prod = 1;
            }
        }
        prod = 1;
        for(int i=nums.size()-1;i>=0;i--){
            prod = prod*nums[i];
            
            if(prod>ans){
                ans = prod;
            }
            
            if(prod==0){
                prod = 1;
            }
        }
    
        
        return ans;
    }
};