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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> ret;
        if(root == NULL) return ret;
        stack<TreeNode*> buff;
        
        TreeNode* ptr = root;
        while(!buff.empty()||ptr!=NULL){
        	while(ptr != NULL){
        		ret.push_back(ptr -> val);
        		buff.push(ptr);
        		ptr = ptr -> left;
        	}
        	if(!buff.empty()){
        		ptr = buff.top();
        		buff.pop();
        		ptr = ptr -> right;
        	}
        }
        return ret;
    }
};
