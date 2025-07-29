class Solution {  // class Solution 
 public:  // public:
  bool isPossibleToCutPath(vector<vector<int>>& grid) {  // bool isPossibleToCutPath(vector<vector<int>>& grid)
    if (!hasPath(grid, 0, 0)) // if (!haspath(grid, 0,0))
      return true;   // return true;
    // Reassign (0, 0) as 1.
    grid[0][0] = 1;   // grid[0][0] = 1;
    return !hasPath(grid, 0, 0);   // return !hasPath(grid, 0, 0);
  }

 private:
  // Returns true is there's a path from (0, 0) to (m - 1, n - 1).
  // Also marks the visited path as 0 except (m - 1, n - 1).
  bool hasPath(vector<vector<int>>& grid, int i, int j) {   // bool hasPath(vector<vector<int>>& grid, int i, int j)
    if (i == grid.size() || j == grid[0].size()) // if (i == grid.size() || j ++ grid[0].size())
      return false;  // return false;
    if (i == grid.size() - 1 && j == grid[0].size() - 1)   // if (i == grid.size() - 1 &&j == grid[0].size() - 1)
      return true;  // return true;
    if (grid[i][j] == 0)   // if (grid[i][j] == 0)
      return false;  // return false

    grid[i][j] = 0;
    // Go down first. Since we use OR logic, we'll only mark one path.
    return hasPath(grid, i + 1, j) || hasPath(grid, i, j + 1);
  }
};