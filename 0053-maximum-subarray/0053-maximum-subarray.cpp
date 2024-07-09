class Solution { // class Solution {}
 public: // public:
  int maxSubArray(vector<int>& nums) { // int maxSubArray(vector<int>& nums) {}
    // dp[i] := the maximum sum subarray ending in i 
    vector<int> dp(nums.size()); // vector<int> dp(nums.size()); 

    dp[0] = nums[0]; // dp[0] = nums[0];
    for (int i = 1; i < nums.size(); ++i) // for (int i - 1; i < nums.size(); ++i)
      dp[i] = max(nums[i], dp[i - 1] + nums[i]); // dp[i] = max(nums[i], dp[i - 1] + nums[i]);

    return ranges::max(dp); // return ranges::max(dp);
  }
};