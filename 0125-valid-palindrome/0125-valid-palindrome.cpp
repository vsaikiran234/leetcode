class Solution { //c lass Solution {}
 public: // public:
  bool isPalindrome(string s) { // bool isPalindrome(string s)
    int l = 0; // int l = 0;
    int r = s.length() - 1; // int r = s.length() - 1;

    while (l < r) { // while (l < r)
      while (l < r && !isalnum(s[l])) // while (l < r && !isalnum(s[l]))
        ++l; // ++l;
      while (l < r && !isalnum(s[r])) // while (l < r && !isalnum(S[r]))
        --r; // --r;
      if (tolower(s[l]) != tolower(s[r])) // if (tolower(s[l]) != tolower(s[r]))
        return false; // return fasle;
      ++l; // ++l;
      --r; // --r;
    }

    return true; // return true;
  }
};