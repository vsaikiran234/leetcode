class Solution { // class Solution {}
 public: // public:
  string minWindow(string s, string t) { // string minWindow(string s, string t)
    vector<int> count(128); // vector<int> count(128);
    int required = t.length(); // int required = t.length();
    int bestLeft = -1; // int bestleft = -1;
    int minLength = s.length() + 1; // int minLength = s.length() + 1;

    for (const char c : t) //for(const char c : t)
      ++count[c]; // ++count[c];

    for (int l = 0, r = 0; r < s.length(); ++r) { // for (int l = 0,r = 0;r < s.length(); ++r)
      if (--count[s[r]] >= 0) // if(--coun t[s[r]] >= 0)
        --required; // --required;
      while (required == 0) { // while (required == 0)
        if (r - l + 1 < minLength) { // if (r - l + 1 < minLength) {}
          bestLeft = l; //bestLeft = l;
          minLength = r - l + 1; // minLength = r - l + 1;
        }
        if (++count[s[l++]] > 0) // if (++count[s[l++]] > 0)
          ++required; // ++required;
      }
    }

    return bestLeft == -1 ? "" : s.substr(bestLeft, minLength); // return bestLeft == -1 ? "" : s.substr(bestLeft, minLength); 
  }
};