class Solution {
 public:
 
  long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
    long ans = 0;
    long sum = 0;
   
    vector<pair<int, int>> G;
    priority_queue<int, vector<int>, greater<>> minHeap;

    for (int i = 0; i < nums1.size(); ++i)
      G.emplace_back(nums2[i], nums1[i]);

    ranges::sort(G, greater<>());

    for (const auto& [num2, num1] : G) {
      minHeap.push(num1);
      sum += num1;
      if (minHeap.size() > k)
        sum -= minHeap.top(), minHeap.pop();
      if (minHeap.size() == k)
        ans = max(ans, sum * num2);
    }

    return ans;
  }
};