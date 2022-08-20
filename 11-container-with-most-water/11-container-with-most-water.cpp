class Solution {
public:
    int maxArea(vector<int>& height) {
        int m=1;
        int n=height.size();
        int j=n-1;
        int i=0;
        m=min(height[0],height[j])*j;
        while(i<=j)
        {
            if(height[i]<height[j]){
                i++;
                m=max(m,min(height[i],height[j])*(j-i));
            }
            else if(height[i]>height[j]){
                j--;
                 m=max(m,min(height[i],height[j])*(j-i));
            }
            else{
                m=max(m,min(height[i],height[j])*(j-i));
                j--;
            }
        }
        return m;
    }
};