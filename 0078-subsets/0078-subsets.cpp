class Solution {  // class solution {}
 public: // public:
  vector<vector<int>> subsets(vector<int>& nums) {  // vector<vector<int>> subsets(vector<int>& nums)
    vector<vector<int>> ans; ///vector<vector<int>> ans;
    dfs(nums, 0, {}, ans);  //dfs(nums, 0, {}, ans);
    return ans;  // return ans;
  }

 private:   // private:
  void dfs(const vector<int>& nums, int s, vector<int>&& path,  // void dfs(const vector<int>& nums , int s, vector<int> && path)
           vector<vector<int>>& ans) {  // vector<vector<int>>& ans)
    ans.push_back(path);  // ans.push_back(path)

    for (int i = s; i < nums.size(); ++i) {  // for (int i = s; i < nums.size(); ++i())
      path.push_back(nums[i]);  // path.pushback(nums[i])
      dfs(nums, i + 1, move(path), ans); // dfs(nums, i +1, move (path))
      path.pop_back(); // ans
    }
  }
};