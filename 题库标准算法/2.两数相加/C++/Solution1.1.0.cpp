class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode();
        ListNode* p = result;
        const ListNode* pl1 = l1, * pl2 = l2;
        unsigned short carry = 0;

        while(pl1 || pl2 || carry)
        {
            unsigned short usL1 = pl1 ? pl1->val : 0;
            unsigned short usL2 = pl2 ? pl2->val : 0;
            unsigned short value = usL1 + usL2 + carry;

            carry = value / 10;
            value %= 10;

            p->next = new ListNode(value);
            p = p->next;

            if(pl1)
                pl1 = pl1->next;

            if(pl2)
                pl2 = pl2->next;
        }

        return result->next;
    }
};
