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
    int diameterOfBinaryTree(TreeNode* root) {
        vector<int> v;
		//vector to store the diameter of all nodes
        int x=record(root,v);
		//finding the max of all diameters
        for(int i=0;i<v.size();i++){
            x=max(x,v[i]);
        }
        return x;
    }
    
    int record(TreeNode* root, vector<int> &v){
        if(root->right==NULL && root->left==NULL){
            return 0;
        }
        int l=0,r=0;
        if(root->left){
            l=1+record(root->left, v);
        }
        if(root->right){
            r=1+record(root->right, v);
        }
        v.push_back(l+r);
        
        return max(l,r);
    }
};