class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        //int c=0;
        unordered_set<int> s;
        for(int i = 0; i<nums.size()-1;i++){
            int f=nums[i]+k;
          //  int *p = &i;
            if(binary_search(nums.begin()+i+1, nums.end(),f)){
                s.insert(min(f,nums[i]));
            }
        }
        return s.size();
    }
};