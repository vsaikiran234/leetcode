enum class State { kInit, kVisiting, kVisited }; // enum class state { Knit, KVisiting, Kvisited}

class Solution { // class Solution {}
 public: // public:
  vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) { // vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites)
    vector<int> ans; // vector<int> ans;
    vector<vector<int>> graph(numCourses); // vector<vector<int>> graph(numCourses);
    vector<State> states(numCourses); //vector<state states(numCourses);

    for (const vector<int>& prerequisite : prerequisites) { // for (const vector<int>& prerequisite : prerequisites)
      const int u = prerequisite[1]; // const int v = prerequisite[1];
      const int v = prerequisite[0]; // const int v = prerequisites[0];
      graph[u].push_back(v); // graph[u].push.back(v);
    }

    for (int i = 0; i < numCourses; ++i) // for (int i = 0; i < numCourses; ++i);
      if (hasCycle(graph, i, states, ans)) // if (hasCycle(grph, i, states, ans))
        return {}; // return {};

    reverse(ans.begin(), ans.end()); // reverse(ans.begin(), ans.end());
    return ans; // return ns;
  }

 private: // private:
  bool hasCycle(const vector<vector<int>>& graph, int u, vector<State>& states,
                vector<int>& ans) { // boolhasCycle(const vector<vector<int>& graph, int u, vector<state>& states, )
                
    if (states[u] == State::kVisiting) // if (sttes[u] = state::KVisiting)
      return true; // return true;
    if (states[u] == State::kVisited) // if (states[u] == Sate::KVisisted)
      return false; //return false;

    states[u] = State::kVisiting; // states[u] = state::KVisiting;
    for (const int v : graph[u]) // for(const int v : graph[u])
      if (hasCycle(graph, v, states, ans)) // if hasCycle(graph, v, states, ans)
        return true; // return true;
    states[u] = State::kVisited; // states[u] = state::Kvisited;
    ans.push_back(u);  // ans.push_back(u);

    return false; // return false;
  }
};