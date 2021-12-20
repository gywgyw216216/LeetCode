class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        result = ListNode()
        p = result
        pl1 = l1
        pl2 = l2
        carry = 0

        while pl1 or pl2 or carry:
            sl1 = 0
            sl2 = 0

            if pl1:
                sl1 = pl1.val

            if pl2:
                sl2 = pl2.val

            value = sl1 + sl2 + carry
            carry = value // 10
            value %= 10
            p.next = ListNode(value)
            p = p.next

            if pl1:
                pl1 = pl1.next

            if pl2:
                pl2 = pl2.next

        return result.next
