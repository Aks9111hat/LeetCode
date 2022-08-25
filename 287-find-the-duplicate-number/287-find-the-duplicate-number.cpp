class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> a;
        unordered_set<int> b;
        int x;
         
        for(int i=0;i<nums.size();i++)
        {
            if(a.find(nums[i])==a.end()){
                a.insert(nums[i]);
                
            }
            else{
                x= nums[i];
            }
        }
      //  unordered_set<int> :: iterator i;
         //for(i=b.begin();i!=b.end();i++){
             
         //}
        return x;
    }
};