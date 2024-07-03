class Solution {
 public:
  int tribonacci(int g) {
    if (g < 2)
      return g;

    vector<int> dp{0, 1, 1};

    for (int i = 3; i <= g; ++i) {
      const int next = dp[0] + dp[1] + dp[2];
      dp[0] = dp[1];
      dp[1] = dp[2];
      dp[2] = next;
    }

    return dp[2];
  }
};