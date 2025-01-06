

class Solution { //class Solution {}
 public: // public:
  bool isMatch(string s, string p) { // bool is Match ( string s, string p)
    const int m = s.length(); // const int m = s.length();
    const int n = p.length(); // const int n = p.length();
    // dp[i][j] := true if s[0..i) matches p[0..j)
    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1));
    dp[0][0] = true; // dp[0][0] = true;

    auto isMatch = [&](int i, int j) -> bool {  // auto isMatch = [&](int i, int j) -> bool
      return j >= 0 && p[j] == '.' || s[i] == p[j]; // return j >= 0 && p[j] == '.' || s[i] == p[j];
      
        };

    for (int j = 0; j < p.length(); ++j) // for (int j = 0; j < p.length(); ++j )
      if (p[j] == '*' && dp[0][j - 1]) // if (p[j] == '*' && dp[0][j - 1])
        dp[0][j + 1] = true; // dp[0][j + 1]

    for (int i = 0; i < m; ++i) // for (int i = 0; i < m;  ++i)
      for (int j = 0; j < n; ++j) // for (int j = 0; j < n; ++j)
        if (p[j] == '*') { // if (p[j] == '*')
          // The minimum index of '*' is 1.
          const bool noRepeat = dp[i + 1][j - 1];
          const bool doRepeat = isMatch(i, j - 1) && dp[i][j + 1];
          dp[i + 1][j + 1] = noRepeat || doRepeat;
        } else if (isMatch(i, j)) {
          dp[i + 1][j + 1] = dp[i][j];
        }

    return dp[m][n];
  }
};