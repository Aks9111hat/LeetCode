class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i =0; i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>> nw;
        for(auto i: mp){
            pair<int,int> p = {i.second,i.first};
            nw.push_back(p);
        }
        sort(nw.rbegin(),nw.rend());
        vector <int> ans;
        for(int j=0 ; j<k; j++){
            ans.push_back(nw[j].second);
        }
        return ans;
    }
};