class Solution {
public:
int firstMissingPositive(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        unordered_set<int> s(begin(nums),end(nums));

        for(int i=1;i<nums.size()+2;i++){
            if(s.find(i)==s.end()){
                return i;
            }
            //else return i;
        }
        return -1;
    }
};