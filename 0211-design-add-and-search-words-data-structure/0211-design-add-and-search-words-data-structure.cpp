struct TrieNode { // struct TrieNode {}
  vector<shared_ptr<TrieNode>> children; // vector<shared_ptr<TrieNode>> children;
  bool isWord = false; // bool isWord = false;
  TrieNode() : children(26) {} // TrieNode() : children(26) {}
};

class WordDictionary { // class WordDictionary
 public: // public:
  void addWord(const string& word) { // void addWord(const string& word)
    shared_ptr<TrieNode> node = root; // shared_ptr<TrieNode> node = root;
    for (const char c : word) { // for (const char c : word)
      const int i = c - 'a'; // const int i = c - 'a'
      if (node->children[i] == nullptr) // if (node-> children[i] == nullptr)
        node->children[i] = make_shared<TrieNode>(); // nodde->children[i] -= make_shared<TrieNode>();
      node = node->children[i];
    }
    node->isWord = true;
  }

  bool search(const string& word) {
    return dfs(word, 0, root);
  }

 private:
  shared_ptr<TrieNode> root = make_shared<TrieNode>();

  bool dfs(const string& word, int s, shared_ptr<TrieNode> node) {
    if (s == word.length())
      return node->isWord;
    if (word[s] != '.') {
      shared_ptr<TrieNode> next = node->children[word[s] - 'a'];
      return next ? dfs(word, s + 1, next) : false;
    }

    // If word[s] == '.', then search all the 26 children.
    for (int i = 0; i < 26; ++i)
      if (node->children[i] && dfs(word, s + 1, node->children[i]))
        return true;

    return false;
  }
};