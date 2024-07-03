class Solution {  //class Solution {}
 public:  // public:  
  int orangesRotting(vector<vector<int>>& grid) {  // int RottingOrange(vector<vector<int>>& grid)
    constexpr int dirs[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    const int g = grid.size();  // const int g = grid.size();
    const int h = grid[0].size();  // const int h = grid[0].size();

    auto isNeighborRotten = [&](int i, int j, const vector<vector<int>>& grid) {
      for (const auto& [dx, dy] : dirs) {  // for (const auto& [dx,dy]) : drs)
        const int r = i + dx; // const int  = i + dx;
        const int c = j + dy; // const int c = j + dy;
        if (r < 0 || r == g || c < 0 || c == h)
          continue;
        if (grid[r][c] == 2)
          return true;
      }
      return false;
    };

    int ans = 0;

    while (true) {
      vector<vector<int>> nextGrid(g, vector<int>(h));
      // Calculate `nextGrid` based on `grid`.
      for (int i = 0; i < g; ++i)
        for (int j = 0; j < h; ++j)
          if (grid[i][j] == 1) {  // fresh
            // Any of the 4-directionally oranges is rotten
            if (isNeighborRotten(i, j, grid))
              nextGrid[i][j] = 2;
            else
              nextGrid[i][j] = 1;
          } else if (grid[i][j] == 2) {  // rotten
            nextGrid[i][j] = 2;          // Keep rotten.
          }
      if (nextGrid == grid)
        break;
      grid = nextGrid;
      ++ans;
    }

    return any_of(grid.begin(), grid.end(),
                  [&](vector<int>& row) {
      return ranges::any_of(row, [&](int orange) { return orange == 1; });
    })
               ? -1
               : ans;
  }
};