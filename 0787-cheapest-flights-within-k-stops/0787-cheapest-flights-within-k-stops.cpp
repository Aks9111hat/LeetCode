class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        // Idea: Bellman Ford (2D-DP) --> Space: O(kn); Time: O(kn)
        // 1. Maintain a dp array
        // dp[i][j] = distance to reach j using atmost i edges from src node
        vector<vector<int>> dp(k+2, vector<int>(n, INT_MAX >> 1));
        // and initialize dp array first: distance to src is always zero
        for(int i = 0; i <= k + 1; i++) dp[i][src] = 0;
        // 2. Start dp traversal
        for(int i = 1; i <= k + 1; i++){
            for(vector<int>& flight: flights){
                int prev_node = flight[0], cur_node = flight[1], cur_dist = flight[2];
                dp[i][cur_node] = min(dp[i][cur_node], dp[i-1][prev_node] + cur_dist);
            }
        } return dp.back()[dst] == INT_MAX >> 1 ? -1 : dp.back()[dst];
            
    }
};