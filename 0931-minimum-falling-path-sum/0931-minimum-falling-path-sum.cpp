class Solution {   // class Solution {}
 public: // public:
  int minFallingPathSum(vector<vector<int>>& A) {   // int intFallingPathSum(vector<vector<int>>& A) {}
    const int n = A.size();   // const int n = A.size();

    for (int i = 1; i < n; ++i)   // for (int = 1; i < n; ++i)
      for (int j = 0; j < n; ++j) {   // for (int j = 0; j < n; ++j) {}
        int mn = INT_MAX;   // int mn = INT_MAX;
        for (int k = max(0, j - 1); k < min(n, j + 2); ++k)  // for (int k = max(0, j - 1); k < min(n, j + 2); ++k)
          mn = min(mn, A[i - 1][k]);  // mn = min(mn, A[i - 1][k])
        A[i][j] += mn;  // A[i][j] 
      }

    return ranges::min(A[n - 1]);   // return ranges::min(A[n - 1]);
  }
};