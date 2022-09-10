class Solution {
public:
            
   void dfs(string digits, vector<string>& ans,string ch,map<char,string>& mp, int i)
    {
        if(digits.length()==ch.length()){
            ans.push_back(ch);
            return ;
        }
       for(auto c:mp[digits[i]])
       {
       ch.push_back(c);
        dfs(digits,ans,ch,mp,i+1)  ;
        ch.pop_back();
    }}
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string ch="";
        if(digits.length()==0)return ans;
        map<char,string> mp;
            mp['2']="abc";
            mp['3']="def";
            mp['4']="ghi";
            mp['5']="jkl";
            mp['6']="mno";
            mp['7']="pqrs";
            mp['8']="tuv";
            mp['9']="wxyz";
        dfs(digits,ans,ch,mp,0);
        
     return ans;   
    }
};