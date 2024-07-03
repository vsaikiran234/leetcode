class Solution {  // class Solution {}
 public: // public:
  bool isSymmetric(TreeNode* root) {  // bool isSymmetric(TreeNode* root)
    return isSymmetric(root, root);  // retrurn isSymmetric(root, root);
  }

 private:  // private:
  bool isSymmetric(TreeNode* p, TreeNode* q) {  // bool isSymmetric(TreeNode* p, TreeNode* q)
    if (!p || !q) // if (!p || !q)
      return p == q;  // return p ==q;

    return p->val == q->val &&                 // return p->val == q-> val &&
           isSymmetric(p->left, q->right) &&  // is Symmetric(p->left , q-> right)
           isSymmetric(p->right, q->left);   // isSymmetric(p->right, q-> left);
  }
};