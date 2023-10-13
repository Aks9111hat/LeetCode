class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         vector<int> ans;
         int n=nums.size();
        
        unordered_map<int,int> m;
        
        for(int i=0; i<n; i++ ){
            
            m[nums[i]]++;
        }
        for(int i=0; i<n; i++ ){
            
            if(m[nums[i]]>(n/3)){
                m[nums[i]]=0;
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};