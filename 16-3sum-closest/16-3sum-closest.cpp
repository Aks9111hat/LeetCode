class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        int ans=0;
        int sum;
        int j,k;
        int n=nums.size();
        for(int i=0;i<n;i++){
             j=i+1;
            k=n-1;
        while(j<k){
            sum=nums[i]+nums[j]+nums[k];
            if(abs(diff)>abs(sum-target)){
                diff = sum-target;
                ans = sum;
            }
            if(sum<target){
                j++;
            }else{
                k--;
            }
            
        }
        }  
    return ans;
    }
};