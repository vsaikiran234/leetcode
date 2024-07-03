class Solution {  // class Solution {}
 public:  // public:
  int kthSmallest(TreeNode* root, int k) { //int kthSmallest(TreeNode* root, int k) {}
    const int leftCount = countNodes(root->left); //const int leftCount = countNodes(root->left);

    if (leftCount == k - 1)  // if (leftCount == k - 1)
      return root->val; // return root ->val;
    if (leftCount >= k) // if (leftCount >=k)
      return kthSmallest(root->left, k); //return kth  Smallest(root->left, k);
    return kthSmallest(root->right, k - 1 - leftCount);  // leftCount < k
  }

 private: // private:
  int countNodes(TreeNode* root) { // int countNodes(TreeNode* root)
    if (root == nullptr)  // if (root  == nullptr)
      return 0; // return 0;
    return 1 + countNodes(root->left) + countNodes(root->right); // return 1 + countNodes(root->left)  = countNodes(root->rigth)
  }
};