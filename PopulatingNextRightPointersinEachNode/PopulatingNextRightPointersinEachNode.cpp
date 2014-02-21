/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(!root) return;
        vector<TreeLinkNode*> buff;
        buff.push_back(root);
        int start = 0, last = buff.size(), curr;
        while(start != last){
        	for(curr = start; curr < last - 1; ++curr){
        		if(buff[curr] -> left != NULL) buff.push_back(buff[curr] -> left);
        		if(buff[curr] -> right != NULL) buff.push_back(buff[curr] -> right);
        		buff[curr] -> next = buff[curr+1];
        	}
        	if(buff[curr] -> left != NULL) buff.push_back(buff[curr] -> left);
        	if(buff[curr] -> right != NULL) buff.push_back(buff[curr] -> right);
        	start = last;
        	last = buff.size();
        }
        return;
    }
};
