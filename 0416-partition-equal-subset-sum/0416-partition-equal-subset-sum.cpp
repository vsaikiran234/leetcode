class Solution { // class Solution {

 public: // public:
  bool canPartition(vector<int>& nums) {  // bool canPartition(vector<int>& nums)
    const int sum = accumulate(nums.begin(), nums.end(), 0); // const int sum = accumulate(nums.begin(), nums.end(), 0);
    if (sum & 1) // if(sim & 1)
      return false; // return falase;
    return knapsack(nums, sum / 2); //return knapsack(nums, sum / 2);
  }

 private: //private:
  bool knapsack(const vector<int>& nums, int subsetSum) { // bool knapsack(const vector<int>& nums, int subsetSum)
    const int n = nums.size(); //const int n = nums.size();
    // dp[i][j] := true if j can be formed by nums[0..i)
    vector<vector<bool>> dp(n + 1, vector<bool>(subsetSum + 1)); // vector<vector<bool>> dp(n + 1, vector<bool>(subsetSum + 1));
    dp[0][0] = true; // dp[0][0]

    for (int i = 1; i <= n; ++i) { // for (int i = 1;i <= n)
      const int num = nums[i - 1];
      for (int j = 0; j <= subsetSum; ++j)
        if (j < num)
          dp[i][j] = dp[i - 1][j];
        else
          dp[i][j] = dp[i - 1][j] || dp[i - 1][j - num];
    }

    return dp[n][subsetSum];
  }
};
