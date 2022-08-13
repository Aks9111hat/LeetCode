class Solution {
public:
    int firstUniqChar(string s) {
        queue<char> q;
         unordered_map<char,int> m;
        for(int i=0; i<s.length();i++){
           m[s[i]]++;
            q.push(s[i]);
        }
        int k=0;
        while(!q.empty()){
            if(m[q.front()]>1){
                q.pop();
                k++;
            }
            else
            {
                return k;
            }
        }
        return -1;
    }
};