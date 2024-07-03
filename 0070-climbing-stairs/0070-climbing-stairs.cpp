class Solution {  // class Solution
 public: // public:
  int climbStairs(int n) { // int climStairs(int n) {}
    // dp[i] := the number of ways to climb to the i-th stair
    vector<int> dp(n + 1); // Vector<int> dp(n +1);
    dp[0] = 1;  // dp[0] = 1;
    dp[1] = 1;  // dp[1] = 1;
 
    for (int i = 2; i <= n; ++i) //for (int i = 2; i <=n; ++i)
      dp[i] = dp[i - 1] + dp[i - 2]; // dp[i] = dp[i - 1 + dp[i -2]]

    return dp[n];  // return dp[n];
  }
};