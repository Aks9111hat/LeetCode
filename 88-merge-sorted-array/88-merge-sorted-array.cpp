class Solution {
public:
  /*  void swap(int a, int b){
        int temp = a;
        a=b;
        b=temp;
        return a,b;
    }*/
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
      for(int i =0;i<n;i++){
            nums1[i+m]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
       /* for(int i=0;i<m+n;i++){
            cout<<nums1[i]<<',';
        }*/
    }
};