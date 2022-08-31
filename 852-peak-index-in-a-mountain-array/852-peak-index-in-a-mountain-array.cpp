class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n<3) return -1;
        
        int s=0;
        int e = n-1;
        int mid;
        int ans;
        while(s<e){
            mid = s+(e-s)/2;
            
            if(arr[mid]<arr[mid+1]){
                ans=mid+1;
                s=mid+1;
            }
            else{
                ans=mid;
                e=mid;    
            }
            
        }
        return ans;
    }
};