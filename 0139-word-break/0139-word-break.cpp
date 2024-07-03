class Solution { /// calss Solution {}
 public: // public:
  bool wordBreak(string s, vector<string>& wordDict) { // bool wordBreak(string s, vector<string >& worDict)
    return wordBreak(s, {wordDict.begin(), wordDict.end()}, {}); // return woedBreak(s, wordDict.begin(), worDict.end())
  }

 private: // private:
  bool wordBreak(const string& s, const unordered_set<string>&& wordSet, // bool wordBreak(const string s, const unordered_set<string>&& wordSet,)
                 unordered_map<string, bool>&& mem) {
    if (wordSet.count(s))
      return true;
    if (const auto it = mem.find(s); it != mem.cend())
      return it->second;

    // 1 <= prefix.length() < s.length()
    for (int i = 1; i < s.length(); ++i) {
      const string& prefix = s.substr(0, i);
      const string& suffix = s.substr(i);
      if (wordSet.count(prefix) && wordBreak(suffix, move(wordSet), move(mem)))
        return mem[s] = true;
    }

    return mem[s] = false; // return mem[s]
  }
};