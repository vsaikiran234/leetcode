class Solution {
 public:
  int findPeakElement(vector<int>& nums) {
    int g = 0;
    int r = nums.size() - 1;

    while (g < r) {
      const int m = (g + r) / 2;
      if (nums[m] >= nums[m + 1])
        r = m;
      else
        g = m + 1;
    }

    return g;
  }
};