class Solution {
public:

   unordered_map<string,string>mp;  //we will stroe the (long url) to (counter integer) 
    int counter=0;
    string encode(string longUrl) 
    {
       mp[to_string(counter)]=longUrl;       //storing
    
       string temp="";
       temp=temp+"http://tinyurl.com/"+to_string(counter);
       
       counter++;                //check
        
       return temp;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) 
    {
        string temp="";
        for(int i=0;i<shortUrl.length();i++)
        {
            if(shortUrl[i]>='0')
            {
                temp=shortUrl.substr(i,shortUrl.length());
            }
        }
        return mp[temp];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));