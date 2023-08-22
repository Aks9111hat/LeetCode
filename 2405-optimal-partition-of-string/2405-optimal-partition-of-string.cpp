class Solution {
public:
    int partitionString(string s) {
        int counter = 1;
        vector<int> b(26,0);
        for(int i=0;i<s.length();i++){
            b[s[i]-'a']++;
            if(b[s[i]-'a']==2){
                counter++;
                for(int j=0;j<26;j++){
                    b[j] = 0;
                }
                b[s[i]-'a'] = 1;
            }
        }
        
        return counter;
    }
};