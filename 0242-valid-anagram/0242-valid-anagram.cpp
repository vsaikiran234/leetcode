class Solution { // class Solution {}
 public: // public: 
  bool isAnagram(string s, string t) { // boolisAnagram(string s, string t)
    if (s.length() != t.length()) // if (s.length() != t.length())
      return false; // eturn false;

    vector<int> count(26); //  vector<int> count(26);

    for (const char c : s) // for (const char c : s)
      ++count[c - 'a']; // ++count[c - 'a'] 

    for (const char c : t) { // for (const char c : t)
      if (count[c - 'a'] == 0) // if (count[c - 'a'] == 0)
        return false; // return false;
      --count[c - 'a']; // --count[c - 'a'] 
    }

    return true; // return true;
  } 
}; 