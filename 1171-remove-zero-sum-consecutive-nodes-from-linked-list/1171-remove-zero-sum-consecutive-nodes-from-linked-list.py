# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeZeroSumSublists(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dum = ListNode(0)
        dum.next = head
        pre_sum = 0
        pre_sum_mp = {}
        
        current = dum
        
        while current:
            pre_sum += current.val
            pre_sum_mp[pre_sum] = current
            current = current.next
        
        current = dum
        pre_sum = 0
        
        while current:
            pre_sum += current.val
            if pre_sum in pre_sum_mp:
                current.next = pre_sum_mp[pre_sum].next
            current = current.next
        
        return dum.next
