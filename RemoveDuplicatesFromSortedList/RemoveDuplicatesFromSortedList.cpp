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
    ListNode *deleteDuplicates(ListNode *head) {
        if(head != NULL){
        	ListNode* prev = head;
        	ListNode* curr = head -> next;
        	while(curr != NULL){
        		if(prev -> val != curr -> val){
        			prev = curr;
        			curr = curr -> next;
        		}else{
        			prev -> next = curr -> next;
        			delete curr;
        			curr = prev -> next;
        		}
        	}
        }
        return head;
    } // deleteDuplicates
};
