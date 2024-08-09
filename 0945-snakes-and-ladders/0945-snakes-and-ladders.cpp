class Solution { // class Solution {}
 public: // public: 
  int snakesAndLadders(vector<vector<int>>& board) { // int snakesAndLadders(vector<vector<int>>& borad)
    const int n = board.size(); // conat int n = board.size()
    int ans = 0; // int ans = 0 ;
    queue<int> q{{1}}; // queue<int> q{{1}};
    vector<bool> seen(1 + n * n); // vector<bool> seen(1 + n * n);
    vector<int> A(1 + n * n);  // 2D -> 1D // vector<int> A(1 + n * n)

    for (int i = 0; i < n; ++i) // for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j) // for (int j = 0; j < n; ++j)
        A[(n - 1 - i) * n + ((n - i) % 2 == 0 ? n - j : j + 1)] = board[i][j]; // A[(n - 1 - i) * n +]

    while (!q.empty()) { // while (!q.empty())
      ++ans; // ++ans;
      for (int sz = q.size(); sz > 0; --sz) { // for (int sz = q,size(); sz > 0; -- sz)
        const int curr = q.front(); // const int curr  = q.front();
        q.pop(); // q.pop();
        for (int next = curr + 1; next <= min(curr + 6, n * n); ++next) { // for (int next curr + 1; next <= min(curr + 6, n * n)); ++next)
          const int dest = A[next] > 0 ? A[next] : next; // const int dest = A[next]
          if (dest == n * n) // if (dest == n * n)
            return ans; // return ans;
          if (seen[dest]) // if (seen[dest])
            continue; // continue;
          q.push(dest); // q.push(dest);
          seen[dest] = true; // seen[dest] = true;
        }
      }
    }

    return -1; // return -1;
  }
};