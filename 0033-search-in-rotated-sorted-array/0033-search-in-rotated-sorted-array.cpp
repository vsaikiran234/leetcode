class Solution { // class solution {}
 public: // public: 
  int search(vector<int>& nums, int target) { // int search(vector<int>& nums, int target)
    int l = 0; // int l = 0;
    int r = nums.size() - 1; // int r = nums.size()

    while (l <= r) {  // while (l <= r)
      const int m = (l + r) / 2; // const int m = (l + r)
      if (nums[m] == target)  // if (nums[m] == target)
        return m; // return m;
      if (nums[l] <= nums[m]) {  // nums[l..m] are sorted.
        if (nums[l] <= target && target < nums[m])
          r = m - 1;
        else
          l = m + 1;
      } else {  // nums[m..n - 1] are sorted.
        if (nums[m] < target && target <= nums[r])
          l = m + 1;
        else
          r = m - 1;
      }
    }

    return -1;
  }
};