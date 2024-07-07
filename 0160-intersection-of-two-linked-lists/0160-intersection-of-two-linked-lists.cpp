class Solution { // class Solution {}
 public: // public:
  ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {  //liistNode* getIntersectionNode(ListNode* headA, lIstNode* headB)
    ListNode* a = headA; // ListNode* a = headA;
    ListNode* b = headB; // ListNode* b = headB;
 
    while (a != b) { // while (a != b) {}
      a = a == nullptr ? headB : a->next; // a = a == nullptr ? headB : a-> next;
      b = b == nullptr ? headA : b->next; // b = b == nullptr ? headA : b-> next
    }

    return a; // return a;
  }
};