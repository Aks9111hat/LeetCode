class Solution {
public:
    bool check(unordered_map<char,int> mp,int k){
        int sum = 0;
        int m = 0;
        for(auto it:mp){
            sum += it.second;
            m = max(m,it.second);
        }
        
        if((sum-m)<=k){
            return true;
        }
        else{
            return false;
        }
    }
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int ans = 0;
        int i = 0,j = 0;
        
        while(i<s.length()){
            mp[s[i]]++;
            
            if(check(mp,k)){
                
                ans = max(ans,i-j+1);
                
            }
            else{
                while(check(mp,k)==false){
                    mp[s[j]]--;
                    j++;
                }
    
                ans = max(ans,i-j+1);
            }
            i++;
        }
        
        return ans;
      
    }
};