class Solution {  // class Solution {}
 public: // public: 
  vector<vector<int>> generate(int numRows) { // vector<vector<int>> generate(int nums)
  vector<vector<int>> ans; //vector<vector<int>> ans;

    for (int i = 0; i < numRows; ++i) // for (int i =0;; i < numRows; ++i)
      ans.push_back(vector<int>(i + 1, 1)); // apush_bans(vector<int>(i + 1, 1));

    for (int i = 2; i < numRows; ++i) // for (int i = 2; i < numRows; ++i)
      for (int j = 1; j < ans[i].size() - 1; ++j) // for (int j =1; j < ans[i].size() - 1; ++j)
        ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j]; // ans[i][j] = ans[i - 1][j - 1]

    return ans; // return ans;
  }
};