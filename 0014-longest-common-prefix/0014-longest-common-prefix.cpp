class Solution { // class Solution
 public: // public:
  string longestCommonPrefix(vector<string>& strs) { // string longestCommonPrefix(vector<string>& strs) {}
    if (strs.empty()) // if (strs.empty())
      return ""; // return "";

    for (int i = 0; i < strs[0].length(); ++i) // for (int i = 0; i < strs[0].length(); ++ i)
      for (int j = 1; j < strs.size(); ++j) // for (int j = 1; j < strs.size(); ++j)
        if (i == strs[j].length() || strs[j][i] != strs[0][i]) // if (i == strs[j].length() || strs[j][i] != strs[0][i])
          return strs[0].substr(0, i); // return strs[0].substr(0, i);

    return strs[0]; // return strs[0];
  }
};