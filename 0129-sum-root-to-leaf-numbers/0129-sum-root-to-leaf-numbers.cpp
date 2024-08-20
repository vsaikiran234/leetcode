class Solution { // class Solution {}
 public: // public: 
  int sumNumbers(TreeNode* root) { // int sumNumbers(TreeNode* root)
    int ans = 0; // int ans = 0;
    dfs(root, 0, ans); // dfs(root, 0, ans);
    return ans; // return ans;
  }

 private: // private:
  void dfs(TreeNode* root, int path, int& ans) { // void dfs(TreeNode* root, int path, int& aans)
    if (root == nullptr) // if (root == nullptr)
      return; // return;
    if (root->left == nullptr && root->right == nullptr) { // if (root->left == nullptr && root->right == nullptr)
      ans += path * 10 + root->val; // ans += path * 10 + root->val;
      return; // return ; 
    }

    dfs(root->left, path * 10 + root->val, ans);
    dfs(root->right, path * 10 + root->val, ans);
  }
};