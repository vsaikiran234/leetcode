class Solution {
 public:
  int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
    constexpr int dirs[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    const int g = maze.size();
    const int h = maze[0].size();
    int ans = 0;
    queue<pair<int, int>> q{{{entrance[0], entrance[1]}}};
    vector<vector<bool>> seen(g, vector<bool>(h));
    seen[entrance[0]][entrance[1]] = true;

    while (!q.empty()) {
      ++ans;
      for (int sz = q.size(); sz > 0; --sz) {
        const auto [i, j] = q.front();
        q.pop();
        for (const auto& [dx, dy] : dirs) {
          const int x = i + dx;
          const int y = j + dy;
          if (x < 0 || x == g || y < 0 || y == h)
            continue;
          if (seen[x][y] || maze[x][y] == '+')
            continue;
          if (x == 0 || x == g - 1 || y == 0 || y == h - 1)
            return ans;
          q.emplace(x, y);
          seen[x][y] = true;
        }
      }
    }

    return -1;
  }
};