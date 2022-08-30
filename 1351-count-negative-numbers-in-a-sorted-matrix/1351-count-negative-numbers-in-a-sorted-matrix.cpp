class Solution {
public:
    int countNegatives(vector<vector<int>>& mat) {
         int c=0,m=mat.size(),n=mat[0].size();
        for(int i=0; i<m; i++)
        {
            int l=0,h=mat[i].size()-1;
            while(l<=h)
            {
                int mid=(l+h)/2;
                 if(mat[i][mid] < 0)
                    h=mid-1;
                else
                    l = mid+1;
            }
            c += n-l;
        }
        return c;
    }
};