class Solution {
public:
    int integerBreak(int n) {
        	vector<vector<int>> dp(n,vector<int>(n+1,0));
		for(int j=0;j<n+1;j++) dp[1][j]=1;
		for(int i=2;i<n;i++){
			for(int sum=0;sum<=n;sum++){
				int notpick=dp[i-1][sum];
				int pick=0;
				if(sum>=i) pick=i*dp[i][sum-i];
				dp[i][sum]=max(pick,notpick);
			}
		}
		return dp[n-1][n];
	
    }
};