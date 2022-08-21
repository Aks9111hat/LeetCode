class Solution {
public:
    int climbStairs(int n) {
        
        int i,j;
        i=1;
        j=1;
        int temp;
        for(int k=0; k<n-1; k++){
            temp=i;
            i=i+j;
            j=temp;
        }
        return i;
        
    }
};