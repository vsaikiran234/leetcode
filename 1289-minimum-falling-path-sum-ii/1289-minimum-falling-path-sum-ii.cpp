class Solution { // class Solution
 public:  // public:
  int minFallingPathSum(vector<vector<int>>& grid) {   // int minFallingPathSum(vector<vector<int>>& grid)
    const int n = grid.size();   // const int n = grid.size();

    for (int i = 1; i < n; ++i) { // for (int i = 1; i < n; ++i)
      const vector<pair<int, int>> twoMinNumAndIndexs =   
          getTwoMinNumAndIndexs(grid[i - 1]);    /// const vector<pair<int, int>> twoMinNumAndIndexs = getTwoMinAndIndexs(grid[i - 1]);
      const auto& [firstMinNum, firstMinIndex] = twoMinNumAndIndexs[0];  // const auto& [firstMinNum, firstMinIndex] = twoMinNumAndIndexs[0];
      const auto& [secondMinNum, _] = twoMinNumAndIndexs[1]; // const auto& [secondMinNum, _] = twoMinNumAndIndexs[1];
      for (int j = 0; j < n; ++j) // for (int j = 0; j < n; ++j)
        if (j == firstMinIndex)   // if (j == firstMinIndex)
          grid[i][j] += secondMinNum;   // grid[i][j] += secondMiNum;
        else  // else
          grid[i][j] += firstMinNum;   // grid[i][j] += firstMinNUm
    }

    return ranges::min(grid.back()); // return ranges::min(grid.back());
  }

 private:  // private
  vector<pair<int, int>> getTwoMinNumAndIndexs(const vector<int>& A) {
    vector<pair<int, int>> numAndIndexs;
    for (int i = 0; i < A.size(); ++i)
      numAndIndexs.emplace_back(A[i], i);
    ranges::sort(numAndIndexs);
    return {numAndIndexs[0], numAndIndexs[1]};
  }
};