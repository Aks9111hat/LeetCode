class Solution {
public:
    int maxEvents(vector<vector<int>>& nums) {
                
priority_queue< int , vector<int> , greater<int>> pq;
        
        sort(nums.begin() , nums.end());
        
        int ans=0 , i=0;
        
        for(int d=1;d<=100000;d++)
        {
            // check in the pq that some intervals are expiredi.e end_day < curr_day(d)
            
            while(!pq.empty() && d>pq.top())
            {
                pq.pop();
            }
            
            // Now insert all the intervals which has starting day as (d)
            
            while(i<nums.size() && nums[i][0]==d)
            {
                pq.push(nums[i][1]);
                i++;
            }
            
            if(!pq.empty())
            {
                pq.pop();
                ans++;
            }
            
            if(pq.empty() && i==nums.size())
            {
                break;
            }
            
        }
        return ans;
    }
};