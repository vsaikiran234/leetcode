class Solution { // class Solution 
 public:  // public:
  int findMaxForm(vector<string>& strs, int m, int n) {  // int findmaxForm(vector<string>& strs, int m, int n)
    // dp[i][j] := the maximum size of the subset given i 0s and j 1s are
    // available
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));  /// vector<vector<int>> dp(m +1, vector<int>(n + 1));

    for (const string& s : strs) {  // for (const string& s : strs)
      const int zeros = ranges::count(s, '0');   // const int zeroes = ranges::count(s, '0')
      const int ones = s.length() - zeros;  // const int ines = s.length () - zeroes;
        for (int i = m; i >= zeros; --i)  // for (int i = m; i > zeroes; --i)
        for (int j = n; j >= ones; --j)  // for (int j = n; j >= ones; --j)
          dp[i][j] = max(dp[i][j], dp[i - zeros][j - ones] + 1);   // dp[i][j] = max(dp[i][j] = max(dp[i][j]))
    }

    return dp[m][n];
  }
};