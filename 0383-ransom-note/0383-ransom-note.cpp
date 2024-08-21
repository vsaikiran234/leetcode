class Solution { // class Solution {}
 public: // public:
  // Similar to 0242. Valid Anagram
  bool canConstruct(string ransomNote, string magazine) {
    vector<int> count(26); // vector<int> count(26);

    for (const char c : magazine) // for (const char c : magazine())
      ++count[c - 'a']; // ++ count [c - 'a']

    for (const char c : ransomNote) {
      if (count[c - 'a'] == 0)
        return false; // return false;
      --count[c - 'a'];
    }

    return true; // return tue:
  }
};