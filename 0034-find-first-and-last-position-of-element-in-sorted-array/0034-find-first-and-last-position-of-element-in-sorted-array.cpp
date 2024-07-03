class Solution {  // class solution {}
 public: // public:
  vector<int> searchRange(vector<int>& nums, int target) { // vector<int> searchRange(vector<int>& nums, int tartget)
    const int l = ranges::lower_bound(nums, target) - nums.begin(); // const int l = ranges::ower_bound(nums, target)  - nums.begin();
    if (l == nums.size() || nums[l] != target) ///if (l == nums.size(())
      return {-1, -1}; // return {-1, -1};
    const int r = ranges::upper_bound(nums, target) - nums.begin() - 1;  // const int r = ranges::upper_bound(nums, target)
    return {l, r}; // return { l , r};
  }
};