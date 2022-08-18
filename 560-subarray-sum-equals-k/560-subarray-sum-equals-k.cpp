class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int> s;
        vector<int> pre;
        int n=nums.size();
        int p=0;
        for(int i=0;i<n;i++){
            //s.insert(nums[i]);
            p+=nums[i];
            pre.push_back(p);
        }
        p=0;
        for(int i=0;i<n;i++){
            if(pre[i] == k) 
                p++;
            if(s.find(pre[i]-k)!=s.end()){
                p+=s[pre[i]-k];
            }
            s[pre[i]]++;
        }
        return p;
    }
};