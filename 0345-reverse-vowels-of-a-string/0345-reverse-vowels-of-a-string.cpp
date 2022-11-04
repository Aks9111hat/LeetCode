class Solution {
public:
    string reverseVowels(string s) {
        
        string ans;
        stack<char> st;
        //string vowel={'A','I','O','U','E','a','i','o','u','e',};
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                st.push(s[i]);
                }
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
               s[i]= st.top();
               st.pop();
        }
        ans.push_back(s[i]);
        }
       // reverse(ans.begin(),ans.end());
    return ans;
    }
};