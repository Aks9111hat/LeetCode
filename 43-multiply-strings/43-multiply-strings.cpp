class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int>pos(num1.size() + num2.size());
        for(int i = num1.size() - 1; i >= 0; i--){
            for(int j = num2.size() - 1; j >= 0; j--){
                int sum = (num1[i] - '0') * (num2[j] - '0') + pos[i + j + 1];
                pos[i + j + 1] = sum % 10;
                pos[i + j] += sum / 10;
            }
        }
        string res = "";
        for(auto x: pos) if(!(res == "" && x == 0)) res.push_back(x + '0');
        return res == "" ? "0" : res;
        
    }
};