class Solution {
public:
    int solve(vector<string>&arr,int ind,int len,unordered_map<char,int>&m){
        if(ind==arr.size())
            return len;
        
      int x=0,y=0;
      int f=1; 
      for(auto x:arr[ind])
      {  
         if(m[x]>0)
          {
              f=0;
          }
        m[x]++;
      }
          
       if(f)   
       x=solve(arr,ind+1,len+arr[ind].size(),m);
            
        for(auto x:arr[ind])
                m[x]--;
      y=solve(arr,ind+1,len,m);  
        
      return max(x,y);
        
    }
    int maxLength(vector<string>& arr) {
        int n=arr.size();
        unordered_map<char,int>m ;
        return solve(arr,0,0,m);
    }
};