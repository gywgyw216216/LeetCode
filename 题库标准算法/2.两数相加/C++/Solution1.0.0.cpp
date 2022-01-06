class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode;
        const ListNode* pl1 = l1, * pl2 = l2;
        unsigned short carry = 0;

        result = nullptr;

        ListNode* r = result;

        while(pl1 || pl2 || carry)
        {
            ListNode* p = new ListNode;
            unsigned short usL1, usL2;
            unsigned short value;

            usL1 = usL2 = 10;

            if(pl1)
            {
                usL1 = (unsigned short)pl1->val;
                pl1 = pl1->next;
            }

            if(pl2)
            {
                usL2 = (unsigned short)pl2->val;
                pl2 = pl2->next;
            }

            if(usL1 == 10 && usL2 < 10)
                value = (unsigned short)(usL2 + carry);
            else if(usL2 == 10 && usL1 < 10)
                value = (unsigned short)(usL1 + carry);
            else if(usL1 == 10 && usL2 == 10)
                value = carry;
            else
                value = (unsigned short)(usL1 + usL2 + carry);

            carry = (unsigned short)(value / 10);
            value %= 10;
            p->val = value;

            if(result)
                r->next = p;
            else
                result = p;

            p->next = nullptr;
            r = p;
        }

        return result;
    }
};
