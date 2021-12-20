class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        result = ListNode()
        pl1 = l1
        pl2 = l2
        carry = 0

        r = result

        while pl1 or pl2 or carry:
            p = ListNode()
            sl1 = sl2 = 10

            if pl1:
                sl1 = pl1.val
                pl1 = pl1.next

            if pl2:
                sl2 = pl2.val
                pl2 = pl2.next

            if sl1 == 10 and sl2 < 10:
                value = sl2 + carry
            elif sl2 == 10 and sl1 < 10:
                value = sl1 + carry
            elif sl1 == 10 and sl2 == 10:
                value = carry
            else:
                value = sl1 + sl2 + carry

            carry = value // 10
            value %= 10
            p.val = value

            if result:
                r.next = p
            else:
                result = p

            p.next = None
            r = p

        return result.next
