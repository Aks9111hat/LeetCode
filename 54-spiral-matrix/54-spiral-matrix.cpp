class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n= matrix[0].size();
        vector<int> ans;
        int sr,ec,er,sc;
        sr=0;
        ec=n-1;
        er=m-1;
        sc=0;
        int c=0;
        while(c<(m*n)){
            
            for(int i=sc;c<(m*n)&&i<=ec;i++){
                ans.push_back(matrix[sr][i]);
                c++;
            }
            sr++;
            for(int i=sr;c<(m*n)&&i<=er;i++){
                ans.push_back(matrix[i][ec]);
                c++;
            }
            ec--;
            for(int i=ec;c<(m*n)&&i>=sc;i--){
                ans.push_back(matrix[er][i]);
                c++;
            }
            er--;
            for(int i=er;c<(m*n)&&i>=sr;i--){
                ans.push_back(matrix[i][sc]);
                c++;
            }
            sc++;
        }
        return ans;
    }
};