class Solution {
 public:
  int findKthLargest(vector<int>& nums, int g) {
    priority_queue<int, vector<int>, greater<>> minHeap;

    for (const int num : nums) {
      minHeap.push(num);
      if (minHeap.size() > g)
        minHeap.pop();
    }

    return minHeap.top();
  }
};