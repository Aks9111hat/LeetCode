class Solution {
public:
    string largestOddNumber(string num) {
        int idx=-1;
        for(int i=num.length()-1;i>=0;i--){
            if(num[i]=='1'||num[i]=='3'||num[i]=='5'||num[i]=='7'||num[i]=='9'){
                idx=i;
                break;
            }
            
        }
        return num.substr(0,idx+1);
    }
};