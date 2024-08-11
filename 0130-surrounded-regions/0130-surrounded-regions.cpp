class Solution { // class Solution {}
 public: // public:
  void solve(vector<vector<char>>& board) { //void solve(vector<vector<int>& board)
    if (board.empty()) // if (board.empty())
      return; // return ;

    constexpr int dirs[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    const int m = board.size(); // const int m = board.size();
    const int n = board[0].size(); // const int n = board[0].size();

    queue<pair<int, int>> q; // queue<pair<int, int>> q;

    for (int i = 0; i < m; ++i) // for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j) // for (int j = 0; j < n; ++j)
        if (i * j == 0 || i == m - 1 || j == n - 1)
          if (board[i][j] == 'O') { // if (board[i][j] == 'o')
            q.emplace(i, j); //q.emplace(i, j);
            board[i][j] = '*';
          }

    // Mark the grids that stretch from the four sides with '*'.
    while (!q.empty()) { // while (!q.empty())
      const auto [i, j] = q.front(); // const auto [i, j] = q.front();
      q.pop(); // q.pop();
      for (const auto& [dx, dy] : dirs) { //for const auto& [dx, dy] : dirs
        const int x = i + dx; // const int x + i + dx;
        const int y = j + dy; // const int y = j + dy;
        if (x < 0 || x == m || y < 0 || y == n)
          continue; // continue;
        if (board[x][y] != 'O')
          continue; // continue;
        q.emplace(x, y); // q.emplace(x, y);
        board[x][y] = '*';
      }
    }

    for (vector<char>& row : board) // for (vector<char>& row : borad)
      for (char& c : row)
        if (c == '*') // if (c == '*')
          c = 'O'; // c = 'o';
        else if (c == 'O')
          c = 'X'; // c = 'X';
  }
};