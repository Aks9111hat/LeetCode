class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int g=n-1;
        for(int i= n-1; i>=0;i--){
            if(g<=(i+nums[i])){
                g=i;
            }
        }
        bool f;
        if(g==0){
            f=true;
            
        }
        else{
            f=false;
        }
        return f;
    }
};