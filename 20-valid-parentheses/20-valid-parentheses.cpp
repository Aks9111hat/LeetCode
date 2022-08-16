class Solution {
public:
    bool isValid(string s) {
        /*if (s.length()/2!=0){
            return false;
        }*/
        stack<char> stak;
        int l=s.size();
      
     

        for(int i=0 ; i<l;i++){
             if(s[i]=='(' || s[i]=='[' || s[i]=='{'  ){
              stak.push(s[i]);
            }
           else if(!stak.empty()){
              if(stak.top()=='(' && s[i]==')'){
                stak.pop();}
              else if(stak.top()=='[' && s[i]==']'){
                stak.pop();}
              else if(stak.top()=='{' && s[i]=='}'){
                stak.pop();}
              else return false;
           }
           else{
            return false;
           }

         
         } 
          return stak.empty();
        
    }
};