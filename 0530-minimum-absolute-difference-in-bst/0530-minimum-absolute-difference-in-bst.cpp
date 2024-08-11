class Solution {  // class Solution {}
 public: // public:
  // Similar to 94. Binary Tree Inorder Traversal
  int getMinimumDifference(TreeNode* root) {
    int ans = INT_MAX; // int ans = INT_MAX;
    int prev = -1; // int prev = -1;
    stack<TreeNode*> stack; // stack<TreeNode*> stack;

    while (root || !stack.empty()) { // while(root || !stack.empty())
      while (root) { // while (root)
        stack.push(root); // stack.push(root);
        root = root->left; // root = root->left;
      }
      root = stack.top(), stack.pop(); // root = stack.top(), stack.pop();
      if (prev >= 0) // if (prev >= 0)
        ans = min(ans, root->val - prev);
      prev = root->val; // prev = root->val;
      root = root->right; // root = root->right;
    }

    return ans; // return ans;
  }
};