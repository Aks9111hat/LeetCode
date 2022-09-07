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
     bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if(!subRoot) return true; // If subtree is null then its definitely a part of tree
        
        if(!root) return false; // If tree is null i.e. when we traversed the entire tree but could not find subtree
        
        if(sameTree(root, subRoot)){ // If for any node of tree it is same as subtree return true
            return true;
        } 
        
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot); // Keep repeating the same function for every node of tree
        
    }
    
	// It is used to check whether two trees are similar
    bool sameTree(TreeNode* root, TreeNode* subRoot){
        
        if(!root && !subRoot) return true;
        
        if(!root || !subRoot || root->val != subRoot->val){
            
            return false;
        }
       
        return sameTree(root->left, subRoot->left) && sameTree(root->right, subRoot->right);
    }
};