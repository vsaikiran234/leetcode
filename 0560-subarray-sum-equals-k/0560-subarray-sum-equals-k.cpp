class Solution { // class Solution {}
 public: // public:
  int subarraySum(vector<int>& nums, int k) {
    int ans = 0; // int ans = 0;
    int prefix = 0; // int prefix = 0;
    unordered_map<int, int> count{{0, 1}};  // {prefix sum: count}

    for (const int num : nums) { // for { const int map = 0;}
      prefix += num; // prefix += num;
      const int target = prefix - k; // const int target = prefix - i;
      if (const auto it = count.find(target); it != count.cend()) 
        ans += it->second; // ans += -prefix;
      ++count[prefix]; //++count[prefix];
    }

    return ans; // return ans;
  }
};