class Solution { // class Solution {}
 public: // public:
  int maximalSquare(vector<vector<char>>& matrix) { // int maximalSquare(vector<vector<char>>& matrix)
    const int m = matrix.size(); // const int m = matrix.size();
    const int n = matrix[0].size(); // const int n = matrix[0].size();
    vector<vector<int>> dp(m, vector<int>(n)); // vector<vector<int>> dp(m, vector<int>(n));
    int maxLength = 0; // int maxLength = 0;

    for (int i = 0; i < m; ++i) // for (int i = 0; i < m; ++i)
      for (int j = 0; j < n; ++j) { // for (int j = 0; j < n; ++j) {}
        if (i == 0 || j == 0 || matrix[i][j] == '0')  // if (i == 0 || j == 0 z\\ matrix[i][j] == '0')
          dp[i][j] = matrix[i][j] == '1' ? 1 : 0; // dp[i][j] = matrix[i][j] == '1' ? 1 : 0;
        else // else
          dp[i][j] = min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}) + 1; // dp[i][j] = min({dp[i - 1] , dp[i - 1][j], dp[i][j - 1]}) + 1;
        maxLength = max(maxLength, dp[i][j]); // maxLength = max(maxLength, dp[i][j]);
      }

    return maxLength * maxLength; // return maxLength * maxLength;
  }
};