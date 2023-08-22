class Solution {
public:
    bool check(vector<int> &a, vector<int> &b){
        for(int i=0;i<26;i++){
            if(b[i]!=0){
                if(a[i]!=0){
                    return false;
                }
            }
        
        }
        return true;
    }
    vector<int> partitionLabels(string s) {
        vector<int> a(26,0);
        vector<int> b(26,0);
        vector<int> ans;
        int c=0;
        for(int i=0;i<s.length();i++){
            a[s[i]-'a']++;
        }
        
        for(int j=0;j<s.length();j++){
            b[s[j]-'a']+=1;
            c++;
            a[s[j]-'a']--;
            if(check(a,b)){
                ans.push_back(c);
                c=0;
                for(int z=0;z<26;z++){
                    b[z]=0;
                }
            }
        }
        return ans;
    }
};