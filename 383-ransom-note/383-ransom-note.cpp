class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m;
         map<char,int> m1;
        
        for(int i=0; i<ransomNote.length();i++){
            m[ransomNote[i]]++;
        }
         for(int i=0; i<magazine.length();i++){
            m1[magazine[i]]++;
        }
        for(int i=0; i<ransomNote.length();i++){
           if( m[ransomNote[i]]>m1[ransomNote[i]]){ //and ransomNote[i]==magazine[i]){
               return false;
               
           }
            
        }
        
        return true;
    }
};