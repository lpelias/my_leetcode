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
    ListNode *rotateRight(ListNode *head, int k) {
        if(head == NULL) return NULL;
        if(head -> next == NULL) return head;
        
        int len = 0;
        ListNode* curr = head;
        while(curr != NULL){
        	++len;
        	curr = curr -> next;
        }
        k = k%len;
        
        if(k == 0) return head;
        
        curr = head;
        int i;
        for(i = 0; i < k; ++i){
        	curr = curr -> next;
        }
        
        if(curr == NULL) return head;
        
        ListNode* prev = head;
        while(curr -> next != NULL){
        	curr = curr -> next;
        	prev = prev -> next;
        }
        
        curr -> next = head;
        ListNode* ret = prev -> next;
        prev -> next = NULL;
        return ret;
    }
};
