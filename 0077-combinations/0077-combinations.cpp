class Solution { // class Solution 
 public: // public:
  vector<vector<int>> combine(int n, int k) { // vector<vector<int>> combine(int n, int k)
    vector<vector<int>> ans; // vector<vector<int>> ans;
    dfs(n, k, 1, {}, ans); // dfs(n , k , 1 , {}, ans);
    return ans; // return ans;
  }

 private: // private:
  void dfs(int n, int k, int s, vector<int>&& path, vector<vector<int>>& ans) { // void dfs(int n, int k, int s, vector<int>&& path, vector<vector<int>>& ans)
    if (path.size() == k) { // if (path.size() == k)
      ans.push_back(path); // ans.push_back(path)
      return; // return;
    }

    for (int i = s; i <= n; ++i) { // for (int i = s; i <= n; ++i)
      path.push_back(i); // path.push_back(i);
      dfs(n, k, i + 1, move(path), ans); // dfs(n, k, i + 1, move(path) ans);
      path.pop_back(); // path.pop_back()
    }
  }
};

