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

        //Store the sum of the current nodes
        int curSum = l1->val + l2->val;

        //Rewrite current l1 to hold remainder
        l1->val = curSum % 10;

        //If its the last node and the sum is less than 10 return
        if (curSum < 10 && l1->next == NULL && l2->next == NULL) {
            return l1;
        }

        //Add carry to next l1 node value
        if (curSum > 9 && l1->next != NULL){
            l1->next->val += 1;
        }

        //Create new node for carry if it doesn't exist
        if (curSum > 9 && l1->next == NULL){
            l1->next = new ListNode(1);
        }

        //If l1 is larger than l2, extend l2
        if (l1->next != NULL && l2->next == NULL){
            l2->next = new ListNode(0);
        }

        //If l2 is larger than l1, extend l1
        if (l2->next != NULL && l1->next == NULL){
            l1->next = new ListNode(0);
        }

        //Recursively go through nodes until none are left
        l1->next = addTwoNumbers(l1->next, l2->next);

        return l1;
    }
};
