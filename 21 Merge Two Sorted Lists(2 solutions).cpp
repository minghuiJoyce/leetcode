//first solution

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* head = NULL;
        ListNode ** curr = &head;
        while(l1 != NULL || l2 != NULL){
            if(l1 == NULL){
                *curr = l2;
                return head;
            }
            if(l2 == NULL){
                *curr = l1;
                return head;
            }
            else{
                if(l1->val < l2->val){
                    *curr = new ListNode(l1->val);
                    l1 = l1->next;
                    curr = &((*curr)->next);
                }
                else{
                    *curr = new ListNode(l2->val);
                    l2 = l2->next;
                    curr = &((*curr)->next);
                }
            }
        }
        return head;
    }
};
 
 
 //second solution
 
/*class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* head = NULL;
        ListNode ** curr = &head;
        while(l1 != NULL || l2 != NULL){
            if(l1 == NULL){
                *curr = l2;
                return head;
            }
            if(l2 == NULL){
                *curr = l1;
                return head;
            }
            else{
                if(l1->val < l2->val){
                    *curr = l1;
                    l1 = l1->next;
                    curr = &((*curr)->next);
                }
                else{
                    *curr = l2;
                    l2 = l2->next;
                    curr = &((*curr)->next);
                }
            }
        }
        return head;
    }
};
*/
