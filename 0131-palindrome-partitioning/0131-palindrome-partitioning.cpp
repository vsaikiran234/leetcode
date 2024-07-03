class Solution {    // class solution {}
 public: // public:
  vector<vector<string>> partition(string s) { // vector<vector<string>> partition(strign s)
    vector<vector<string>> ans; /// vector<vector<string>> ans;
    dfs(s, 0, {}, ans);  //dfs(s, 0, {}, ans)
    return ans;  // return ans;
  }

 private:  // private:
  void dfs(const string& s, int start, vector<string>&& path,  // void dfs(const string& s , int , start , vector<string> && path , )
           vector<vector<string>>& ans) {  // vector<vector<string>> & ans 
    if (start == s.length()) {  // if (start == s.length())
      ans.push_back(path);  // ans.push_back(path)
      return;  // return;
    }

    for (int i = start; i < s.length(); ++i)   //for (int i = start; i < s.legth(); ++i)
      if (isPalindrome(s, start, i)) {  //if (isPalindrome(s, start; i))
        path.push_back(s.substr(start, i - start + 1));  // path.push_back(s.substr(start, i - start + 1))
        dfs(s, i + 1, move(path), ans);  // dfs(s, i  + 1, move(path, ans))
        path.pop_back(); // path.pop_back()
      }
  }

  bool isPalindrome(const string& s, int l, int r) {   // bool isPalindrome(const string& s, int l , int r)
    while (l < r)  // while( l < r)
      if (s[l++] != s[r--])  // if (s[l++] ! = s[r--])
        return false;  // return false;
    return true;  // return true;
  }
};