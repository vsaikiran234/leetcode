class Solution { // class Solution {}
 public:  // public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {  // ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    ListNode dummy(0);  // ListNode dummy(0);
    ListNode* curr = &dummy;  // ListNode* curr = &dummy;
    int carry = 0; // int carry = 0;

    while (l1 != nullptr || l2 != nullptr || carry > 0) { // while (l1 != nullptr || l2 != nullptr || carry > 0)
      if (l1 != nullptr) { // if (l1 != nullptr)
        carry += l1->val;// carry += l1-> val;
        l1 = l1->next; ///l1 = l1->next;
      }
      if (l2 != nullptr) { // if (l2 != nullptr)
        carry += l2->val; // carry += l2->val;
        l2 = l2->next; // l2 = l2->next;
      }
      curr->next = new ListNode(carry % 10);  // curr->next = new :istNode(carry % 10);
      carry /= 10; // carry /= 10;
      curr = curr->next; //curr = curr->next;
    }

    return dummy.next; // return dummy.next;
  }
};