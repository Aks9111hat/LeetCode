class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gass=0,costs=0;
        for(int i=0 ;i<gas.size();i++){
            gass+=gas[i];
            costs+=cost[i];
        }
        if(gass<costs){
            return -1;
        }
        int res = 0;
        int pos = 0;
        for(int i=0;i<gas.size();i++){
            
            if(res<0){
                pos = i;
                res=0;
            }
            res+=gas[i]-cost[i];
        }
        return pos;
    }
};