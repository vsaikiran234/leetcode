class Solution { /// class Solution {}
 public: // public:
  void nextPermutation(vector<int>& nums) { // void nextPermutation(vector<int>& nums)
    const int n = nums.size(); // const int n = nums.size();

    // From back to front, find the first number < nums[i + 1].
    int i; // int i;
    for (i = n - 2; i >= 0; --i) // for (i = n - 2; i >= 0; --i)
      if (nums[i] < nums[i + 1]) // if (nums[i] < nums[i + 1])
        break; // break;

    // From back to front, find the first number > nums[i], swap it with
    // nums[i].
    if (i >= 0) // if (i >=0)
      for (int j = n - 1; j > i; --j) // for (int j = n - 1; j > i; --j)
        if (nums[j] > nums[i]) { // if (nums[j] > nums[i])
          swap(nums[i], nums[j]); // swap(nums[i], nums[j]);
          break; // break;
        }

    // Reverse nums[i + 1..n - 1].
    reverse(nums, i + 1, n - 1); // reverse(nums, I + 1, n - 1);
  }

 private: // private: 
  void reverse(vector<int>& nums, int l, int r) { // void reverse(vector<int>& nums, int l, int r)
    while (l < r) // while (l < r)
      swap(nums[l++], nums[r--]); // swap(nums[l++], nums[r--]);
  }
};