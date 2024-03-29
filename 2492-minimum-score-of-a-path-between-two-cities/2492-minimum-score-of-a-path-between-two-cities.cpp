class Solution {
public:
      int dfs(int node,int& ans, vector<vector<pair<int, int>>>& gr, vector<int>& vis){
        vis[node] = 1;
        for(auto& [v, dis] : gr[node]){
            ans = min(ans, dis);
            if(vis[v]==0){
                vis[v] = 1;
                ans = min(ans, dfs(v, ans, gr, vis));
            }
        }
        return ans;
    }

    int minScore(int n, vector<vector<int>>& roads) {
        int ans = INT_MAX;
        vector<vector<pair<int, int>>> gr(n+1);
        for(auto edge : roads){ 
            gr[edge[0]].push_back({edge[1], edge[2]}); // u-> {v, dis}
            gr[edge[1]].push_back({edge[0], edge[2]}); // v-> {u, dis}
        }

        vector<int> vis(n+1, 0);
        dfs(1, ans, gr, vis);

        return ans;
    }
};