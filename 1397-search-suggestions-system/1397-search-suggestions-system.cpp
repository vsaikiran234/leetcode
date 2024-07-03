struct TrieNode { //struct Trienode
  vector<shared_ptr<TrieNode>> children;  // vector<shared_ptr<Trienode>> children;
  const string* word = nullptr; // const string * word = nullptr;
  TrieNode() : children(26) {}  // TrieNode()v;vchildren(26) {}
};

class Solution {   ///class solution {}
 public: public:
  vector<vector<string>> suggestedProducts(vector<string>& products,
                                           string searchWord) {
    vector<vector<string>> ans;  // vector<vector<string>> ans;

    for (const string& product : products) // for ( const string& product : products)
      insert(product);  // insert(product);

    shared_ptr<TrieNode> node = root;

    for (const char c : searchWord) {
      if (node == nullptr || node->children[c - 'a'] == nullptr) {
        node = nullptr;
        ans.push_back({});
        continue;
      }
      node = node->children[c - 'a'];
      ans.push_back(search(node));
    }

    return ans;
  }

 private:
  shared_ptr<TrieNode> root = make_shared<TrieNode>();

  void insert(const string& word) {
    shared_ptr<TrieNode> node = root;
    for (const char c : word) {
      const int i = c - 'a';
      if (node->children[i] == nullptr)
        node->children[i] = make_shared<TrieNode>();
      node = node->children[i];
    }
    node->word = &word;
  }

  vector<string> search(shared_ptr<TrieNode> node) {
    vector<string> res;
    dfs(node, res);
    return res;
  }

  void dfs(shared_ptr<TrieNode> node, vector<string>& ans) {
    if (ans.size() == 3)
      return;
    if (node == nullptr)
      return;
    if (node->word != nullptr)
      ans.push_back(*node->word);
    for (shared_ptr<TrieNode> child : node->children)
      dfs(child, ans);
  }
};