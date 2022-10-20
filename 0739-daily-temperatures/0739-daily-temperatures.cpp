class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
          stack<int> st;
        vector<int> ans(temperatures.size()); // for ans store
        
        // traversing from last means we have processed it previous part
        for(int i=temperatures.size()-1;i>=0;i--){
            if(st.empty()){
                ans[i]=0;
            }else{
                while(!st.empty()){
                    //check condition
                    if(temperatures[st.top()]>temperatures[i]){
                        ans[i]=st.top()-i;
                        break;
                    }else{
                        st.pop();
                    }
                }
                if(st.empty()){
                    ans[i]=0;
                }
               
            }
            //push current index
             st.push(i);
        }
        //return ans;
        return ans;
        
    }
};