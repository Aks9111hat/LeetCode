class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        
        int l=INT_MAX;
        int mp=INT_MIN;
        
        for(int i=0;i<n;i++){
            
            l=min(prices[i],l);
            mp=max(mp,prices[i]-l);
        }
        
        return mp;
        
    }
};