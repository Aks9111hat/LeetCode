class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int c=0;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            
        }
       set<int> :: iterator it;
        for(it=s.begin();it!=s.end();++it){
            nums[c++]=*it;
        }
        
        return c;
    }
};