class Solution { // class Solution {}
 public: // public:
  vector<vector<int>> threeSum(vector<int>& nums) { // vector<vector<int<int> threeSum(vector<int>& nums)
    if (nums.size() < 3) // if (nums.size() < 3)
      return {}; // return {};

    vector<vector<int>> ans; // vector<vector<int>> ans;

    ranges::sort(nums); // ranges::sort(nums);

    for (int i = 0; i + 2 < nums.size(); ++i) { // for (int i = 0; I + 2 < nums.size(); ++i)
      if (i > 0 && nums[i] == nums[i - 1]) // if (i > 0 && nums[i] == nums[i - 1])
        continue; // continue;
      // Choose nums[i] as the first number in the triplet, then search the
      // remaining numbers in [i + 1, n - 1].
      int l = i + 1; // i t l = i + 1;
      int r = nums.size() - 1; // int r = nums.size()
      while (l < r) { // while (l < r) { }
        const int sum = nums[i] + nums[l] + nums[r]; // const int sum = nums[i] + nums[l]  + nums[r];
        if (sum == 0) { // if (sum == 0)
          ans.push_back({nums[i], nums[l++], nums[r--]}); // ans.push_back({nums[i], nums[l++], nums[r--]});
          while (l < r && nums[l] == nums[l - 1]) // while (l < r && nums[ == nums[l - 1l])
            ++l; // ++l;
          while (l < r && nums[r] == nums[r + 1]) // while (l <r && nums[r] == nums[r + 1])
            --r; // --r;
        } else if (sum < 0) { // else if (sum < o) {}
          ++l; // ++l;
        } else { // else{}
          --r; // --r;
        }
      }
    }

    return ans; // return ans;
  }
};