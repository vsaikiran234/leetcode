enum class State { kInit, kVisiting, kVisited };

class Solution {  // class Solution {}
 public: // public:
  bool canFinish(int numCourses, vector<vector<int>>& prerequisites) { // bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {}
    vector<vector<int>> graph(numCourses); // vector<vector<int>> graph(numCourses);
    vector<State> states(numCourses); // vector<state> state(numCourses);

    for (const vector<int>& prerequisite : prerequisites) { // for (const vector<int>& prerequisites : prerequisites) {}
      const int u = prerequisite[1]; // const int u = prerequisites[1];
      const int v = prerequisite[0];  // const int v = prerequisites[0] ;
      graph[u].push_back(v); // graph[u].push_back(v);
    }

    for (int i = 0; i < numCourses; ++i) // for (int i = 0; i < numCourses; ++i)
      if (hasCycle(graph, i, states)) // if (HAsCycle(graph, i , states))
        return false; // return false;

    return true; // return true;
  }

 private: // private:
  bool hasCycle(const vector<vector<int>>& graph, int u, // bool hasCycle(const vector<vector<int>>& graph, int u)
                vector<State>& states) {
    if (states[u] == State::kVisiting)
      return true;
    if (states[u] == State::kVisited)
      return false;

    states[u] = State::kVisiting;
    for (const int v : graph[u])
      if (hasCycle(graph, v, states))
        return true;
    states[u] = State::kVisited;

    return false;
  }
};