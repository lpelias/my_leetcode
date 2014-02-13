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
        if(!head || !head -> next) return head;
        ListNode *curr = head, *ptr = head -> next, *prev = NULL;
        int oldVal = head -> val - 1;
        while(ptr){
        	if(ptr -> val == curr -> val || curr -> val == oldVal){
        		oldVal = curr -> val;
        		delete curr;
        		if(head == curr){
        			head = ptr;
        		}
        		if(prev){
        			prev -> next = ptr;
        		}
        	}else{
        		prev = curr;
        	}
        	curr = ptr;
        	ptr = ptr -> next;
        }
        if(curr -> val == oldVal){
        	delete curr;
        	if(head == curr){
        		head = ptr;
        	}
        	if(prev){
        		prev -> next = ptr;
        	}
        }
        return head;
    }
};
