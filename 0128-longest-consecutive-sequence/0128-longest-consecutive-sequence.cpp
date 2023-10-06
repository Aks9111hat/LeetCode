class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int c=1;
        int ans=1;
        int n = nums.size();
        if(n==0) return 0;
        for(int i=0; i<n-1; i++){
            if(nums[i+1]-nums[i]==1){
                c++;
                ans = max(c,ans);
            }
            else if(nums[i+1]==nums[i]){
                continue;
            }
            else{
                c=1;
            }
        }
       return ans; 
       
    }
};