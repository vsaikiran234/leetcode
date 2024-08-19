class Solution { // class Solution {}
 public: // public:
  int countNodes(TreeNode* root) { // int countNodes(TreeNode* root)
    if (root == nullptr) // if (root == nullptr)
      return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
  }
};