class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int c=0;
        int l,r;
        l=r=0;
        while(r<n-1){
            int far=0;
            for(int i=l; i<r+1;i++){
                far = max(far, i+nums[i]);
            }
            l=r+1;
            r=far;
            c+=1;
        }
        
        
        return c;
    }
    
};