class disjointset{
    public:
    vector<int>par;
    disjointset(int n){
        par.resize(n+1);
        for(int i=0; i<=n; i++){
            par[i]=i;
        }
    }
    int findp(int u){
        if(u==par[u]){
            return u;
        }
        return par[u]=findp(par[u]);
    }
    void un(int u, int v){
        if(findp(u)==findp(v)){return;}
        par[findp(u)]=par[findp(v)];
    }
};
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        disjointset d(edges.size());
        vector<vector<int>>v;
        for(auto it: edges){
            if(d.findp(it[0])==d.findp(it[1])){
                v.push_back({it[0], it[1]});
            }
            else{
                d.un(it[0], it[1]);
            }
        }
        return v[v.size()-1];
    }
};