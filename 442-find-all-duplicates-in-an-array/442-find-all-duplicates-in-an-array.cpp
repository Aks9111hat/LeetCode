class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> s;
            
            for(int i=0 ; i<nums.size();i++){
                
                if(s.find(nums[i])!=s.end()){
                    ans.push_back(nums[i]);
                }
                s.insert(nums[i]);
            }
        return ans;
    }
};