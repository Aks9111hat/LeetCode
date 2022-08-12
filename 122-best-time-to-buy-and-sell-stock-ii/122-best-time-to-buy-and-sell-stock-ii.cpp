class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int hold,sell;
        // hold = prices[0];
        // sell= INT_MIN;
        int p=0;
        for(int i=0;i<prices.size()-1;i++){
            // int H =hold,S=sell;
            // H=min(H,prices[i]);
            // S=max(S,prices[i]);
            if(prices[i+1]>prices[i]){
            p+=prices[i+1]-prices[i];
             // hold=prices[i+1];
             // sell=prices[i+1];
            }
            else continue;
        }
        return p;
    }
};