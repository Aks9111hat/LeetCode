class Solution {
public:
    vector<int> res;          
    int gen(int n)
    {
     long long s=0;
         while(n!=0)
         {
             s=s+pow(n%10,2);
             n/=10;
         }
        if(s==1 || (binary_search(res.begin(),res.end(),s)))     
            return s;
        else
           {
               res.push_back(s);
               return gen(s);    
           }
    }
    bool isHappy(int n) {
        return gen(n)==1?true:false;
    }
};