class Solution {  // class solution {}
 public: // public:
  vector<string> generateParenthesis(int n) { // vector<string> generateParenthesis(int n)
    vector<string> ans;  // vector<string> ans ;
    dfs(n, n, "", ans); // dfs(n, n, "", ans);
    return ans;  // return ans;
  }

 private:  // private
  void dfs(int l, int r, string&& path, vector<string>& ans) {
    if (l == 0 && r == 0) {  // if (l === 0 && r == 0 )
      ans.push_back(path); // ans.push.back(path);
      return; /// return;
    }

    if (l > 0) {
      path.push_back('(');
      dfs(l - 1, r, move(path), ans);
      path.pop_back();
    }
    if (l < r) {
      path.push_back(')');
      dfs(l, r - 1, move(path), ans);
      path.pop_back();
    }
  }
};