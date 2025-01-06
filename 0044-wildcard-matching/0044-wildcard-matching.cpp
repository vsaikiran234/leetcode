class Solution { // class Solution {}
 public: // punblic:
  bool isMatch(string s, string p) { // bool isMatch(string s, string p)
    const int m = s.length(); // const int m = s.length();
    const int n = p.length();  // const int n = p.length();

    // dp[i][j] := true if s[0..i) matches p[0..j)
    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1)); // vector<vector<bool>> dp(m + 1, vector<bool>(n + 1))
    dp[0][0] = true; // dp[0][0] = true;

    auto isMatch = [&](int i, int j) -> bool { // auto isMatch = [&](int i, itn j) -> bool 
      return j >= 0 && p[j] == '?' || s[i] == p[j]; // return j >=0 && p[j] == '?' || s[i] == p[j];   
      }; // } ;

    for (int j = 0; j < p.length(); ++j) // for (int j = 0; j < p.length(); ++j)
      if (p[j] == '*') // if (p[j] == '*"")
        dp[0][j + 1] = dp[0][j]; // dp[0][j + 1] = dp[0][j];

    for (int i = 0; i < m; ++i) // fr (int i = 0; i < m; ++i)
      for (int j = 0; j < n; ++j) // for (int j = 0; j < n;; ++j)
        if (p[j] == '*') { // if (p[j] == '*')
          const bool matchEmpty = dp[i + 1][j]; // const bool matchEmpty  = dp[i + 1][j];
          const bool matchSome = dp[i][j + 1]; // const cool match Some = dp[i][j + 1]
          // const bool matchSome = dp[i][j + 2]; 
          dp[i + 1][j + 1] = matchEmpty || matchSome; // dp[i + 1][j + 1] = matchEmpty || matchSome;
          // dp[i + 1][j + 1] = matchEmpty || matchSome;
        } else if (isMatch(i, j)) { //else if (is mAtch(i , j ))
          dp[i + 1][j + 1] = dp[i][j]; // dp[i + 1][j + 1] = dp[i][j];
        }

    return dp[m][n]; // return dp[m][n];
  }
};