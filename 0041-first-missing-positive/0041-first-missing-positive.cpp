class Solution { // class Solution {}
 public: // public:
  int firstMissingPositive(vector<int>& nums) { // int firstMissingPositive(vector<int>& nums)
    const int n = nums.size(); // const int n = nums.size();

    // Correct slot:
    // nums[i] = i + 1
    // nums[i] - 1 = i
    // nums[nums[i] - 1] = nums[i]
    for (int i = 0; i < n; ++i) // for (int i = 0;i < n; ++1;)
      while (nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1]) // while (nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1])
        swap(nums[i], nums[nums[i] - 1]); // swap(nums[i], nums[nums[i] - 1]);

    for (int i = 0; i < n; ++i) // for (int i = 0; i < n; ++i)
      if (nums[i] != i + 1) // if (nums[i] != i + 1)
        return i + 1; // return i + 1;

    return n + 1; // return n + 1;
  }
};