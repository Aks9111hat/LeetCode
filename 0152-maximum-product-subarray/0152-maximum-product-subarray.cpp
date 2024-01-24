class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int prf=1;
        int sfx=1;
        int n=nums.size();
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            
            if(prf==0){
                prf=1;}
            if(sfx==0){
                sfx=1;
            }
          prf=prf*nums[i];
            sfx=sfx*nums[n-i-1];
            mx=max(mx,max(prf,sfx));
            
        }
        return mx;
    }
};