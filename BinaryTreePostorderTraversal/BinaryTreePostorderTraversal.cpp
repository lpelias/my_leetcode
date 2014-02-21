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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> ret;
        if(root == NULL) return ret;
        
        stack<TreeNode*> buff;
        TreeNode* ptr = root;
        TreeNode* prev = NULL;
        TreeNode* top = NULL;
        while((ptr != NULL)||(!buff.empty())){
        	while(ptr != NULL){
        		buff.push(ptr);
        		ptr = ptr -> left;
        	}
        	if(!buff.empty()){
        		top = buff.top();
        		if(top -> right != NULL&&top -> right!=prev){
        			ptr = top -> right;
        		}else{
        			ret.push_back(top -> val);
        			prev = top;
        			buff.pop();
        		}
        	}
        }
        return ret;
    }
};
