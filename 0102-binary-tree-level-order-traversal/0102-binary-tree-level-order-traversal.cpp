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
    private:
  int heightT(TreeNode* root) {
        if (!root) return 0;
        int l = heightT(root->left);
        int r = heightT(root->right);
        return 1 + (l>r ? l:r);
    }

    void levelT(TreeNode* root, vector<vector<int>>& v, int height, int curr=0) {
        if (!root || curr>height) return;
        v[curr].push_back(root->val);
        levelT(root->left, v, height, curr+1);
        levelT(root->right, v, height, curr+1);
    }

public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        int height = heightT(root);
        vector<vector<int>> v(height);
        levelT(root, v, height-1);
        return v;
    }
};