/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         TreeNode * roo = root;
           
           while(roo){
        if(roo->val>p->val && roo->val>q->val){
           roo =roo->left;
        }
        else if(roo->val<p->val && roo->val<q->val ){
            roo= roo->right;
        }
        else{
            return roo;
        }
        
        }
        return root;
    }
};