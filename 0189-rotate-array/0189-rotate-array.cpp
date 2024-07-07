class Solution { // class Solution {}
 public:  // public:
  void rotate(vector<int>& nums, int k) { // void rotate(vector<int>& nums, int k)
    k %= nums.size(); // k % = nums.size();
    reverse(nums, 0, nums.size() - 1); // reverse(nums, 0 , nums.size() - 1);
    reverse(nums, 0, k - 1); // reverse(nums, 0, k - 1);
    reverse(nums, k, nums.size() - 1); // reverse(nums, k , nums.size())
  }

 private: // private:
  void reverse(vector<int>& nums, int l, int r) { // void reverse(vector<int>& nums, int l, int r)
    while (l < r) //while (l < r)
      swap(nums[l++], nums[r--]); // swap(nums[l++], nums[r--]);
  }
};