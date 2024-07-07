class Solution { // class Solution 
 public: // public:
  ListNode* detectCycle(ListNode* head) { // ListNode* detectCycle(ListNode* head)
    ListNode* slow = head; // ListNode* slow = head;
    ListNode* fast = head; // ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) { // while (fast != nullptr && fast->next != nullptr)
      slow = slow->next;  // slow = slow->next;
      fast = fast->next->next; // fast = fast->next->next;
      if (slow == fast) { // if (slow == fast)
        slow = head; // slow = head;
        while (slow != fast) { // while (slow !- fast)
          slow = slow->next;  // slow = sow->next;
          fast = fast->next; // fast = fast->next
        }
        return slow; // return slow;
      }
    }

    return nullptr; // return nullptr;
  }
};