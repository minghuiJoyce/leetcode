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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int p = 0;
        int q = 0;
        int carry = 0;
        ListNode * currentAns = new ListNode(0);
        ListNode ** head = &(currentAns->next);
        while(l1!=NULL || l2!=NULL){
            if(l1==NULL){
                p = 0;
            }
            else{
                p = l1->val;
                l1 = l1->next;
            }
            if(l2==NULL){
                q=0;
            }
            else{
                q= l2->val;
                l2 = l2->next;
            }            
            currentAns->next = new ListNode((p+q+carry)%10);
            carry = (p+q+carry)/10;
            currentAns = currentAns->next;
        }
        if(carry == 1){
            currentAns->next = new ListNode(1);
        }
     return *head;   
    }
        

};
