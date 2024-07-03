class Solution {   // class solution {}
 public:   // public:
  int minDistance(string word1, string word2) {  //int minDistance(string Word1, string Word 2)
    const int m = word1.length();  // const int m = word1.length();
    const int n = word2.length();  // const int n = word2.length();
    // dp[i][j] := the minimum number of operations to convert word1[0..i) to
    // word2[0..j)
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));  //vector<vector<int> dp(m +1, vector<int>(n+1))

    for (int i = 1; i <= m; ++i)  //for (int i =1; i <= m; ++i)
      dp[i][0] = i;  //dp[i][0]

    for (int j = 1; j <= n; ++j)  // for (int j =1; j <= n; ++j)
      dp[0][j] = j;  //dp[0][i] = j;

    for (int i = 1; i <= m; ++i)   //for (int i = 1; i <= m; ++i)
      for (int j = 1; j <= n; ++j)  // for (int j =1; j< = n; ++ j)
        if (word1[i - 1] == word2[j - 1])  // if (word1[i - 1] == word2[j - 1])
          dp[i][j] = dp[i - 1][j - 1];  // dp[i][j] = dp[i - 1][j - 1];
        else //else
          dp[i][j] = min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}) + 1;

    return dp[m][n];   //return dp[m][n];
  }
};