class Solution {
public:
    string addBinary(string a, string b) {
        string ns;
        int c=0;
        while(a.length()<b.length()) a='0'+a;
        while(a.length()>b.length()) b='0'+b;
        
        for(int i=a.length()-1;i>=0;i--)
        {
           // int sum=0;
            //sum = a[i]+b[i]-'0'-'0';
            if(a[i]=='1' && b[i]=='1'&& c==0){
                ns.push_back('0');
                c=1;
            }
            else if(a[i]=='1' && b[i]=='1'&& c==1){
                ns.push_back('1');
                c=1;
            }
            else if((a[i]=='1' || b[i]=='1')&& c==1){
                 ns.push_back('0');
                c=1;
            }
            else if((a[i]=='1' || b[i]=='1')&& c==0)
            {
                ns.push_back('1');
                c=0;
            }
            else if(a[i]=='0' && b[i]=='0'&& c==1)
            {
                ns.push_back('1');
                c=0;
            }
            else{
                ns.push_back('0');
                c=0;
            }
        }
        if(c==1){
           ns.push_back('1');
        }
        reverse(ns.begin(),ns.end());
            return ns;
        
    }
};