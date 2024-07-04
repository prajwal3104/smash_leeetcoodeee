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
    ListNode* mergeNodes(ListNode* head) {
        if(head == NULL || head -> next == NULL) return head;
        
        ListNode *curr = head;
        ListNode* ans = new ListNode();
        ListNode* temp = ans;
        
        while(curr != NULL){
            if(curr -> val == 0) curr = curr -> next;
            else{
                int sum = 0;
                while(curr -> val != 0){
                    sum = sum + curr -> val;
                    curr = curr -> next;
                }
                ListNode* node = new ListNode(sum);
                temp -> next = node;
                temp = temp -> next;
            }
        }
        return ans -> next;
    }
};