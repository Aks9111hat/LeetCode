/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
        vector<int> sol;
    vector<int> inorderTraversal(TreeNode* root) {
        //TreeNode current = *root;
        stack<TreeNode*> st;
        
        while (root || !st.empty() )
        {
           while(root)
           {
            st.push(root);
            root = root->left;
           }

           root = st.top();
            st.pop();
           sol.push_back(root->val);
           root=root->right;
        }
        



        return sol;
        
    }
    
};