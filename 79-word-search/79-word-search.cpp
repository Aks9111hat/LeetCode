class Solution {
public:
    bool dfs(vector<vector<char>>& board,vector<vector<int>>& visited,int i ,int j,int r, int c,int ind ,string &word){
        if(ind==word.size()){
            return true;
        }
        
        if(i<0 || j<0 || i>=r || j>=c || board[i][j]!= word[ind] || visited[i][j]==1){
            return false;
            
        }
        
        visited[i][j] = 1;
        
            
             bool h2 = dfs(board, visited , i+1 , j , r , c, ind+1,word );//down
             bool h3 = dfs(board, visited , i-1 , j , r , c, ind+1,word );//up
             bool h4 = dfs(board, visited , i , j+1 , r , c, ind+1,word );//right
         bool h1 = dfs(board, visited , i , j-1 , r , c, ind+1,word );//left
            
            if(h1||h2||h3||h4){
                return true;
            }
        visited[i][j] = 0;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
       int rows = board.size();
        int col = board[0].size();
        vector<vector<int>> visited(rows,vector<int>(col,0));
       for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                if(board[i][j] == word[0]){
                    if(dfs(board,visited,i,j,rows,col,0,word)){
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};