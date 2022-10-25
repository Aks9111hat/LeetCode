class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans ="";
        string ans1="";
        //bool flag=true;
        for(auto i:word1){
            ans+=i;
        }
        for(auto j:word2){
             ans1+=j;
        }
        
        
        
        return ans==ans1;
    }
};