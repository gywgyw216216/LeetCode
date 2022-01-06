struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* result = (struct ListNode*)malloc(sizeof(struct ListNode));

    result->next = NULL;

    struct ListNode* p = result;
    const struct ListNode* pl1 = l1, * pl2 = l2;
    unsigned short carry = 0;

    while(pl1 || pl2 || carry)
    {
        unsigned short usL1 = pl1 ? (unsigned short)pl1->val : (unsigned short)0;
        unsigned short usL2 = pl2 ? (unsigned short)pl2->val : (unsigned short)0;
        unsigned short value = (unsigned short)(usL1 + usL2 + carry);

        carry = (unsigned short)(value / 10);
        value %= 10;

        p->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        p->next->next = NULL;
        p->next->val = value;
        p = p->next;

        if(pl1)
            pl1 = pl1->next;

        if(pl2)
            pl2 = pl2->next;
    }

    return result->next;
}
