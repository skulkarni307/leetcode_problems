# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        """
        Questions: Are they of same size? 
        What's min & max size?(Is it 0 to 2^32?)
        Can they be empty?
        """
        #Create a dummy head so as to return its next node as result
        result_head = ListNode(0) 
        result = result_head
        res_val =0
        #Run loop till either l1 and l2 end. In that case, run loop to create node using res_val(carry)
        while l1 or l2 or res_val: 
            val1 = l1.val if l1!=None else 0
            val2 = l2.val if l2!=None else 0
            
            res_val+= val1 + val2
            result.next = ListNode(res_val%10)
            result = result.next
            res_val =res_val//10
            
            if l1:
                l1=l1.next
            if l2:
                l2= l2.next
                
        return result_head.next         
