class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
         vector<int> res;
        vector<vector<int>> adj(numCourses, vector<int>());
        vector<int> degree(numCourses, 0);
        queue<int> q;
        for (const auto& pre : prerequisites) {
            // e.g, [2,4], then we store 4->2 
            // and [4]==1
            adj[pre[1]].push_back(pre[0]);
            degree[pre[0]]++;
        }
        for (int i = 0; i < numCourses; ++i) {
            // push cources without any pre into a queue.
            if (degree[i] == 0) {
                q.push(i);
            }
        }
        while (!q.empty()) {
            int pre = q.front(); 
            q.pop();
            numCourses --;
            // Found the result and store it. 
            res.push_back(pre);
            for (auto c : adj[pre]) {
                degree[c]--;
                if (degree[c] == 0) {
                    q.push(c);
                }
            }
        }
        return (numCourses == 0) ? res : vector<int>();
    }
};