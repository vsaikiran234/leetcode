class Solution { // class Solution 
 public: // public:
  ListNode* removeNthFromEnd(ListNode* head, int n) { // ListNode* removeNthFromEnd(ListNode* head, int n)
    ListNode* slow = head; //ListNode* slow = head; 
    ListNode* fast = head;  // ListNode* fast = head;

    while (n--)  // while (n--)
      fast = fast->next; // fast = fast->next;
    if (fast == nullptr) // if (fast ==  nulltr)
      return head->next; // retrurn head->next;

    while (fast->next) { //while (fast->next) {}
      slow = slow->next; // slow = slow->next;
      fast = fast->next; //fast = fast->next;
    }
    slow->next = slow->next->next; // slow->next = slow->next->next;

    return head; // return head;
  }
};