class Solution { // class Solution {}
 public: // public:
  bool wordPattern(string pattern, string str) { // bool wordPattern(string pattern , string str)
    const int n = pattern.length(); // const int n = pattern.length();
    istringstream iss(str); // isStringStream iss(str)
    vector<int> charToIndex(128); // vector<int> charToIndex(128)
    unordered_map<string, int> stringToIndex;  // unordered_map<string, int> StringsToIndex;

    int i = 0; // int i = 0;
    for (string word; iss >> word; ++i) {
      if (i == n)  // out-of-bounds
        return false; // return false;
      if (charToIndex[pattern[i]] != stringToIndex[word])
        return false; // retur false;
      charToIndex[pattern[i]] = i + 1;
      stringToIndex[word] = i + 1;
    }

    return i == n; // return i == n;
  }
};