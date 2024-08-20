

class Solution { // class SOlution {}
 public: // public:
  bool hasPathSum(TreeNode* root, int sum) {
    if (root == nullptr) // if (root == nullptr)
      return false; //return false
    if (root->val == sum && root->left == nullptr && root->right == nullptr)
      return true; // return true;
    return hasPathSum(root->left, sum - root->val) ||
           hasPathSum(root->right, sum - root->val);
  }
};