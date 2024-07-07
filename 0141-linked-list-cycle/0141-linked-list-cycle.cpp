class Solution { // class Solution {}
 public: // public:
  bool hasCycle(ListNode* head) { // bool hasCycle(ListNode* head)
    ListNode* slow = head; // ListNode* slow = head;
    ListNode* fast = head; // ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
      slow = slow->next; // slow = slow->next;
      fast = fast->next->next; // fast = fast->next->next;
      if (slow == fast) // if (slow == fast)
        return true; // return true;
    }

    return false; // return false;
  }
};