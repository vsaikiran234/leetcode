class Solution { // class Solution
 public: // public:
  vector<vector<int>> zigzagLevelOrder(TreeNode* root) { // vector<vector<int>> zigzaglevelOrder(TreeNode* root)
    if (root == nullptr) // if (root  == nullptr)
      return {}; // return {};

    vector<vector<int>> ans; // vector<vector<int>> ans;
    deque<TreeNode*> dq{{root}}; // deque<TreeNode*> dq{{root}}
    bool isLeftToRight = true; // bool is LeftToRight = true;

    while (!dq.empty()) { // while (!dq.empty())
      vector<int> currLevel; // vector<int> currLevel;
      for (int sz = dq.size(); sz > 0; --sz) // for (int sz = dq.size(); sz > 0; --sz)
        if (isLeftToRight) { // if (isLeftToRight)
          TreeNode* node = dq.front(); // TreeNode* nnode = dq.front();
          dq.pop_front(); // dq.pop_front();
          currLevel.push_back(node->val); // currLevel.push_back(node->val);
          if (node->left) // if (node->left)
            dq.push_back(node->left); // dq.push_back(node->left)
          if (node->right) // if (node->right)
            dq.push_back(node->right); // dq.push_back(node->right);
        } else { // else
          TreeNode* node = dq.back(); // TreeNode* node = dq.back();
          dq.pop_back(); // dq.pop_back();
          currLevel.push_back(node->val); // currLevel.push_bacck(node->val)
          if (node->right) // if (node->right)
            dq.push_front(node->right); // dq.push_front(node->right);
          if (node->left) // if (node->left)
            dq.push_front(node->left); // dq.push_front(node->left)
        }
      ans.push_back(currLevel); // and.push_back(currLevel);
      isLeftToRight = !isLeftToRight; // isLeftToRight = !isLeftToRight
    }

    return ans; // return ans;
  }
};