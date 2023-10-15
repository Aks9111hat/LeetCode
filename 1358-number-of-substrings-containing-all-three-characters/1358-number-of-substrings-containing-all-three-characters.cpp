class Solution {
public:
    int numberOfSubstrings(string s) {
        int left = 0;
        int counta = 0,countb =0,countc = 0;
        int ans = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i]=='a') counta++;
            if(s[i]=='b') countb++;
            if(s[i]=='c') countc++;
            
            while(counta && countb && countc){
                if(s[left]=='a') counta--;
                if(s[left]=='b') countb--;
                if(s[left]=='c') countc--;
                left++;
            }
            ans+=left;
            
        }
        return ans;
    }
};