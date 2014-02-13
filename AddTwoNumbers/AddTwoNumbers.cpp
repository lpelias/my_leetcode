/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
		int carry = 0;
		int addition = 0;
		ListNode* c_rl1 = l1;
		ListNode* c_rl2 = l2;
		ListNode* pre = NULL;
		ListNode *temp, *ret;
		while((c_rl1 != NULL)||(c_rl2 != NULL)){
			int val1 = c_rl1 == NULL?0:(c_rl1->val);
			int val2 = c_rl2 == NULL?0:(c_rl2->val); 
			addition = val1+val2+carry;
			carry = static_cast<int>(addition/10);
			addition = addition%10;
			temp = new ListNode(addition);
			if(pre == NULL){
			    ret = temp;
			}else{
			    pre -> next = temp;
			}
			pre = temp;
			c_rl1 = c_rl1 == NULL?NULL:c_rl1->next;
			c_rl2 = c_rl2 == NULL?NULL:c_rl2->next;
		} // while
		if(carry != 0){
		    temp = new ListNode(carry);
		    pre -> next = temp;
		}
		return ret;
    } // *addTwoNumbers
};
