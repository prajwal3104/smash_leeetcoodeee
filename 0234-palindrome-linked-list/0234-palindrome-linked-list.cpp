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
    ListNode* reverse(ListNode* slow) {
        if (slow == nullptr || slow->next == nullptr)
            return slow;
        ListNode* newnode = reverse(slow->next);
        ListNode* front = slow->next;
        front->next = slow;
        slow->next = nullptr;
        return newnode;
    }

public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != nullptr and fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newhead = reverse(slow->next);
        ListNode* first = head;
        ListNode* second = newhead;
        while (second!=nullptr) {
            if (first->val != second->val) {
                reverse(newhead);
                return false;
            }
            first = first->next;
            second = second->next;
        }
        reverse(newhead);
        return true;
    }
};