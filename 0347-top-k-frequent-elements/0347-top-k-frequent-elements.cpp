struct T {  // struct T {}
  int num;  // int num; 
  int freq;   // int freq;
  T(int num, int freq) : num(num), freq(freq) {} // T(int num, int freq) : num(num), freq(freq) {}
}; 
    
class Solution {  // class Solution {}
 public:  // public:
  vector<int> topKFrequent(vector<int>& nums, int k) { // vector<int> topKFrequent(vector<int>& nums, int k)
    const int n = nums.size(); // const int n = nums.size()
    vector<int> ans;  // vector<int> ans;
    unordered_map<int, int> count;  // unordered_map<int, int> count;
    auto compare = [](const T& a, const T& b) { return a.freq > b.freq; };  // auto compare = [](const T& a, const T& b) { return a.freq > b.freq; };
    priority_queue<T, vector<T>, decltype(compare)> minHeap(compare); // prority_queue<T, vector<T>, declytype(compare)> minHeap(compare);
    for (const int num : nums)
      ++count[num];

    for (const auto& [num, freq] : count) {
      minHeap.emplace(num, freq);
      if (minHeap.size() > k)
        minHeap.pop();
    }

    while (!minHeap.empty())
      ans.push_back(minHeap.top().num), minHeap.pop();

    return ans;
  }
};