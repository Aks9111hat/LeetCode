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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans ;
        
        if(root==NULL){
            return ans;
        }
        helper(root, "", ans);
        
        return ans;
            
    }
    public:
    void helper(TreeNode* root , string path, vector<string>& ans){
        path+=to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            ans.push_back(path);
            return;
        }
        if(root->left!=NULL){
            helper(root->left, path+"->", ans);
        }
        if(root->right!=NULL){
            helper(root->right, path+"->", ans);
        }
    }
};