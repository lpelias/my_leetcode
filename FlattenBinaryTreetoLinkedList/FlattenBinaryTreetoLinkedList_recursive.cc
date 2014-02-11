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
    void flatten(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        if(root == NULL) return;
        
        TreeNode* saved_right = root -> right, *ptr = root;
        
        root -> right = root -> left;
        root -> left = NULL;
        
        while(ptr -> right != NULL) ptr = ptr -> right;
        ptr -> right = saved_right;
        
        flatten(root -> right);
	} // flatten
};
