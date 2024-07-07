class Solution { // class Solution 
 public: // public:
  ListNode* sortList(ListNode* head) { // ListNode* sortList(ListNode* head)
    const int length = getLength(head); // const int length - getLength(head);
    ListNode dummy(0, head); // ListNode dummy(0, head);

    for (int k = 1; k < length; k *= 2) {  // for (int k =1; k < length; k *= 2)
      ListNode* curr = dummy.next; // ListNode* curr = dummy.next;
      ListNode* tail = &dummy; // ListNode* tail = &dummy
      while (curr) { // while (curr)
        ListNode* l = curr; // ListNode* l = curr;
        ListNode* r = split(l, k); // ListNode* r = split(l, k);
        curr = split(r, k); // curr = split(r, k);
        auto [mergedHead, mergedTail] = merge(l, r); // auto [mergedHead, mergedTail]
        tail->next = mergedHead; // tail->next = mergedHead;
        tail = mergedTail; // tail = mergedtail;
      }
    }

    return dummy.next; // return dummy.next;
  }

 private: // private:
  int getLength(ListNode* head) { // int getLength(ListNode* head)
    int length = 0; // int length = 0;
    for (ListNode* curr = head; curr; curr = curr->next) // for( ListNode* curr = head; curr = curr->next)
      ++length; // ++length;
    return length; // return length;
  }

  ListNode* split(ListNode* head, int k) { // ListNode* split(ListNode* head, int k)
    while (--k && head) // while (--k && head)
      head = head->next; // head =head->next;
    ListNode* rest = head ? head->next : nullptr; // ListNode* rest = head ? head->next : nullptr;
    if (head != nullptr) // if (head ! = nullptr)
      head->next = nullptr; // head->next = nullptr;
    return rest; // return rest;
  }

  pair<ListNode*, ListNode*> merge(ListNode* l1, ListNode* l2) {
    ListNode dummy(0); // ListNode dummy(0);
    ListNode* tail = &dummy; // ListNode* tail = &dummy

    while (l1 && l2) { // while (l1 && l2)
      if (l1->val > l2->val) // if (l1->val > l2->val)
        swap(l1, l2); //swap(l1, l2)
      tail->next = l1; //tail->next = l1;
      l1 = l1->next; // l1 = l1->next;
      tail = tail->next; // tail = tail->next;
    }
    tail->next = l1 ? l1 : l2;
    while (tail->next) // while (tail->next)
      tail = tail->next; // tail = tail->next;

    return {dummy.next, tail}; // return {dummy.next, tail};
  }
};