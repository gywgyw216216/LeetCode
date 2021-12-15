class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode result = new ListNode();
        ListNode p = result;
        ListNode pl1 = l1;
        ListNode pl2 = l2;
        short carry = 0;

        while (pl1 != null || pl2 != null || carry != 0)
        {
            short sL1;
            short sL2;

            if (pl1 != null)
            {
                sL1 = (short) pl1.val;
            }
            else
            {
                sL1 = 0;
            }

            if (pl2 != null)
            {
                sL2 = (short) pl2.val;
            }
            else
            {
                sL2 = 0;
            }

            short value = (short) (sL1 + sL2 + carry);

            carry = (short) (value / 10);
            value %= 10;

            p.next = new ListNode(value);
            p = p.next;

            if (pl1 != null)
            {
                pl1 = pl1.next;
            }

            if (pl2 != null)
            {
                pl2 = pl2.next;
            }
        }

        return result.next;
    }
}
