class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])==m.end())
            {
                m[nums[i]]=1;
            }else{m[nums[i]]++;}
        }
      int max =INT_MIN;
        int a;
       for(auto itr : m){
           if((itr.second)>max){
               max=itr.second;
               a=itr.first;
           }
       } 
          return a ;
    }
};