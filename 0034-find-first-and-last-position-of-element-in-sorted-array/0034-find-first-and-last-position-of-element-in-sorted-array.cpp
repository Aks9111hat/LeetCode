class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
          vector<int> ans;
        
        if(binary_search(nums.begin(), nums.end(), target)){
            int st = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
            int en = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
            ans.push_back(st);
            ans.push_back(en);
        }
        else{
            ans.push_back(-1);
            ans.push_back(-1);
        }
        
        return ans;
    }
};