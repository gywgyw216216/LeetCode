class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode result;
        ListNode pl1 = l1;
        ListNode pl2 = l2;
        short carry = 0;

        result = null;

        ListNode r = result;

        while (pl1 != null || pl2 != null || carry != 0)
        {
            ListNode p = new ListNode();
            short sL1;
            short sL2;
            short value;

            sL1 = sL2 = 10;

            if (pl1 != null)
            {
                sL1 = (short) pl1.val;
                pl1 = pl1.next;
            }

            if (pl2 != null)
            {
                sL2 = (short) pl2.val;
                pl2 = pl2.next;
            }

            if (sL1 == 10 && sL2 < 10)
            {
                value = (short) (sL2 + carry);
            }
            else if (sL2 == 10 && sL1 < 10)
            {
                value = (short) (sL1 + carry);
            }
            else if (sL1 == 10 && sL2 == 10)
            {
                value = carry;
            }
            else
            {
                value = (short) (sL1 + sL2 + carry);
            }

            carry = (short) (value / 10);
            value %= 10;
            p.val = value;

            if (result != null)
            {
                r.next = p;
            }
            else
            {
                result = p;
            }

            p.next = null;
            r = p;
        }

        return result;
    }
}
