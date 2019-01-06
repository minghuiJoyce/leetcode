/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 //first solution

class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode *,int> visitedNode;
        int pos = 0;
        while(head != NULL){
            if(visitedNode.find(head)==visitedNode.end()){
                visitedNode[head] = pos;
                pos++;
                head = head->next;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
 
 
 //second solution:two pointers
 /*
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* turtle = head;
        int speed = 0;
        while(head != NULL){
            head = head->next;
            if(head == turtle){
                return true;
            }
            if(speed == 1){
                turtle = turtle->next;
                speed = 0;
                continue;
            }
            
            speed++;
        }
        return false;
    }
};
*/
