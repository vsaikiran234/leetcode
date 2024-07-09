class Solution { // class Solution {}
 public: // public:
  vector<int> findAnagrams(string s, string p) { // vector<int> findAnagrams(string s, string p)
    vector<int> ans; // vector<int> ans;
    vector<int> count(128); // vector<int> count(128);
    int required = p.length(); // int required = p.length();

    for (const char c : p) // for (const char c : p)
      ++count[c]; // ++count[c];

    for (int l = 0, r = 0; r < s.length(); ++r) { // for (int l = 0, r = 0; r < s.length(); ++r)
      if (--count[s[r]] >= 0) // if (--count[s[r]] >= 0)
        --required;  // -- required;
      while (required == 0) { //while (required == 0)
        if (r - l + 1 == p.length()) // if (r - l + 1 == p.length())
          ans.push_back(l); // ans.pus_back(l);
        if (++count[s[l++]] > 0) // if (++count[s[l++]] > 0)
          ++required; // ++required;
      }
    }

    return ans; // return ans;
  }
};