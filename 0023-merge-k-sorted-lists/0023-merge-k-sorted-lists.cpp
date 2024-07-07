class Solution { // class Solution {}
 public: // public:
  ListNode* mergeKLists(vector<ListNode*>& lists) { // ListNode* mergeLists(vec;tor<ListNode*>& lists)
    ListNode dummy(0); // ListNode dummy(0);
    ListNode* curr = &dummy; // ListNode* curr = &dummy;
    auto compare = [](ListNode* a, ListNode* b) { return a->val > b->val; }; // auto compare = [](ListNode* a , lIstNode* b ) { return a->val > b-> val;}
    priority_queue<ListNode*, vector<ListNode*>, decltype(compare)> minHeap( // prority_queue<ListNode* , vector<ListNode*>, decltype(compare(compare)> minHeap)
        compare); // compare)

    for (ListNode* list : lists) // for (ListNode* list : Lists)
      if (list != nullptr) // if (lists ! = nullptr)
        minHeap.push(list); // minHeap.push(list);

    while (!minHeap.empty()) { // while (!minHeap.empty())
      ListNode* minNode = minHeap.top(); // ListNode* minNode = minHeap.top();
      minHeap.pop(); // minHeap.pop();
      if (minNode->next) // if (minNode->next)
        minHeap.push(minNode->next); // minHeap.push(minNode->next);
      curr->next = minNode; // curr->next = minNode;
      curr = curr->next; // curr = curr->next;
    }

    return dummy.next; // return dummy.next;
  }
};