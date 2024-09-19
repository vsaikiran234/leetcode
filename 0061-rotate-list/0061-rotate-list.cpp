
class Solution {
 public: // public:
  ListNode* rotateRight(ListNode* head, int k) {
    if (!head || !head->next || k == 0) // if (head || head == 0)
      return head;

    ListNode* tail; //  ListNode* tail = tailNode After 
    int length = 1;
    for (tail = head; tail->next; tail = tail->next)
      ++length;
    tail->next = head;  // Circle the list.

    const int t = length - k % length;
    for (int i = 0; i < t; ++i)
      tail = tail->next;
    ListNode* newHead = tail->next;
    tail->next = nullptr;

    return newHead;
  }
};