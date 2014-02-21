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
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        vector<vector<int> > ret;
        if(!root) return ret;
        vector<TreeNode*> buff;
        buff.push_back(root);
        int start = 0, last = buff.size(), curr;
        bool flag = false;
        vector<int> curr_level;
        while(start != last){
        	curr_level.clear();
        	for(curr = start; curr < last; ++curr){
        		if(buff[curr] -> left != NULL) buff.push_back(buff[curr] -> left);
        		if(buff[curr] -> right != NULL) buff.push_back(buff[curr] -> right);
        	}
        	if(flag){
        		for(curr = last - 1; curr >= start; --curr){
        			curr_level.push_back(buff[curr] -> val);
        		}
        	}else{
        		for(curr = start; curr < last; ++curr){
        			curr_level.push_back(buff[curr] -> val);
        		}
        	}
        	ret.push_back(curr_level);
        	start = last;
        	last = buff.size();
        	flag = !flag;
        }
        return ret;
    }
};
