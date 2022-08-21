class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> ans(n+1,0);
        int p=1;
        for(int i=1;i<=n;i++){
            if(p*2==i){
                p=i;
            }
            ans[i]=1+ans[i-p];
        }
        return ans;
    }
};