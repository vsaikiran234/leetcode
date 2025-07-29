class Solution {  // class Solution
 public: // public:
  int shortestPathLength(vector<vector<int>>& graph) {   // int shortestPathLength(vector<vector<int>>& graph) 
    const int n = graph.size();  // const int n = graph.size();
    const int goal = (1 << n) - 1;   // const int goal = (1 << n) - 1;
    queue<pair<int, int>> q;  // (u, state)
    vector<vector<bool>> seen(n, vector<bool>(1 << n)); //vector<vector<bool>> seen(n, vector<bool>(1 << n));

    for (int i = 0; i < n; ++i) // for (int i = 0; i< n; ++i)
      q.emplace(i, 1 << i); //q.emplace(i, 1 << i);

    for (int step = 0; !q.empty(); ++step)   // for (int step = 0; !q.empty(); ++step)
      for (int sz = q.size(); sz > 0; --sz) {   // for (int sz = q.size(); sz > 0; --sz)
        const auto [u, state] = q.front();   // const auto [u, state] = q.front();
        q.pop();   // q.pop();
        if (state == goal)   // if (state == goal)
          return step;  // return step;
        if (seen[u][state])  // if (seen[u][state])
          continue;   // continue;
        seen[u][state] = true;    // seen[u][state] = true;
        for (const int v : graph[u])   // for (const int v : graph[u])
          q.emplace(v, state | 1 << v);    // q.emplace(v, state | 1 << v);
      }

    return -1;
  }
};