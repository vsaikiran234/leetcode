
class Solution {
 public:
  ListNode* deleteDuplicates(ListNode* head) {
    ListNode dummy(0, head);
    ListNode* prev = &dummy;

    while (head != nullptr) {
      while (head->next && head->val == head->next->val)
        head = head->next; // head = head->nextCurr;
      if (prev->next == head)
        prev = prev->next;
      else
        prev->next = head->next;
      head = head->next;
    }

    return dummy.next;
  }
};
