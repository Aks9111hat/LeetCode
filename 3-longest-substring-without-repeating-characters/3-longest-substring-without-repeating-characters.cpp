class Solution {
public:
      int lengthOfLongestSubstring(string s) {
        int start = 0, end = 0;
        set<char> window;
        int result = 0;
        for(int i = 0; i < s.length(); i++){
            if(!window.count(s[i])) {
                window.insert(s[i]);
                result = max(result, i-start+1);
            }
            else {
                while(window.count(s[i])) {
                    window.erase(s[start]);
                    start++;
                }
                window.insert(s[i]);
            }
        }
        return result;
    }
};