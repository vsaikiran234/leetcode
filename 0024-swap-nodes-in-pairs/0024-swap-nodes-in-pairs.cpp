class Solution { // class Solution :
 public: // public:
  ListNode* swapPairs(ListNode* head) { // ListNodes* swapPairs(ListNode* head)
    const int length = getLength(head); // const int legth = getLength(head);
    ListNode dummy(0, head);  // ListNode dummy(0, head);
    ListNode* prev = &dummy;  //  ListNode* prev + &dummy;
    ListNode* curr = head; // ListNode* curr = head;

    for (int i = 0; i < length / 2; ++i) {  // for (int i = 0; i < lenggth / 2; ++i)
      ListNode* next = curr->next; //ListNode* next = curr->next;
      curr->next = next->next; //curr->next = next->next;
      next->next = prev->next; // next->next = prev->next;
      prev->next = next; // prev->next = next;
      prev = curr; //prev = curr;
      curr = curr->next; //curr = curr->next;
    }

    return dummy.next; //return dummy.next;
  }

 private: // private:
  int getLength(ListNode* head) { // int getLength(ListNode* head)
    int length = 0; // int length = 0;
    for (ListNode* curr = head; curr; curr = curr->next)  // for (ListNode* curr = head; curr; curr; curr = curr->next)
      ++length;
    return length; //return length;
  }
};