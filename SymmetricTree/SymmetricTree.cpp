/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        if(root == NULL) return true;
        if((root -> left == NULL)&&(root -> right == NULL)) return true;
        return isSym(root -> left, root -> right);
    } // is symmetric
    
    bool isSym(TreeNode *t1, TreeNode *t2){
    	if((t1 == NULL)&&(t2 == NULL)) return true;
    	if((t1 != NULL)&&(t2 != NULL)){
    	    return ((t1 -> val == t2 -> val)&&isSym(t1 -> left, t2 -> right)&&isSym(t1 -> right, t2 -> left));
    	}
    	return false;
    } // two trees are sym
};
