class Solution {
public:
    void helper(vector<vector<int>>& isConnected,vector<int>& visited, int i ){
        for(int j = 0 ; j<isConnected.size(); j++){
            if(isConnected[i][j]==1 && visited[j]==0){
                visited[j]=1;
                helper(isConnected,visited,j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> visited(isConnected.size());
        int num=0;
        for(int i=0 ; i<isConnected.size();i++){
            if(visited[i]==0){
                helper(isConnected,visited,i);
                num++;
            }
        }
        return num;
    }
};