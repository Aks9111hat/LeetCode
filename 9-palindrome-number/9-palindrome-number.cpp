class Solution {
public:
    bool isPalindrome(int x) {
        string str,rstr;
        str = to_string(x);
        rstr = str;
        reverse(rstr.begin(), rstr.end());
        if(str==rstr) 
            return true;
        else 
            return false;
    }
};