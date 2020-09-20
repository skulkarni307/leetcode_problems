/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //Create a dummy head so as to return its next node as result
        ListNode *dummy_head = new ListNode();
        ListNode *result = dummy_head;
        int sum=0;
        //Run loop till either l1 or l2 present or carry value in sum present
        while(l1||l2||sum){
            sum +=(l1 ? l1->val : 0) + (l2? l2->val : 0);
            result->next =new ListNode(sum%10);
            result = result ->next;
            sum/=10; //Save carry
            
            if(l1){l1=l1->next;}
            if(l2){l2=l2->next;}
        }
        return dummy_head->next;
    }
};
