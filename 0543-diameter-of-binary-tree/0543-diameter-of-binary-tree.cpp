
class Solution { //class solution{}
 public: //public::
  int diameterOfBinaryTree(TreeNode* root) { // int DiameterOfBinaryTree(TreeNOde* root)
    int ans = 0; // int ans 0;
    maxDepth(root, ans); //maxDepth(root, ans);
    return ans; //return ans;
  }

 private: // privae
  int maxDepth(TreeNode* root, int& ans) { // intmaxDepth(TreeNode* root, int& anss)
    if (root == nullptr) //if (root == nullptr)
      return 0; //return 0;

    const int l = maxDepth(root->left, ans); //const int l = maxDepth , root-> left , ans)
    const int r = maxDepth(root->right, ans); //const int r = maxDepth(root-> right , an);
    ans = max(ans, l + r); 
    return 1 + max(l, r);
  }
};