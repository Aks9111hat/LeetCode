class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
         if(words.size() == 1)
        return true;
    
    unordered_map <char,int> table;
    
    int l = order.length(); 
    int n = 0;
    
    for(int i=0; i<l; i++)
        table.insert({order[i],++n});
    
    l = words.size();
    
    for(int i=0; i<l-1; i++)
    {
        string word = words[i];
        string next_word = words[i+1];
        
        int len = min(word.length(), next_word.length());
        
        for(int j=0; j<len; j++)
        {
            if(table[word[j]] < table[next_word[j]])
                break;
            
            else if(table[word[j]] > table[next_word[j]])
                return false;
            
            else if(table[word[j]] == table[next_word[j]] && j == len-1)
            {
                if(word.length() > next_word.length())
                    return false;
            }
        }
        
    }
    
    return true;

    }
};