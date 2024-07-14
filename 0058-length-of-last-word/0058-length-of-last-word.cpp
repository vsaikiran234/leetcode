class Solution { // class Solution 
 public: // public:
  int lengthOfLastWord(string s) { // int lengthOfLastWord(string s)
    int i = s.length() - 1; // int i = s.length() - 1;

    while (i >= 0 && s[i] == ' ') // while (i >= 0 && s[i] == ' ')
      --i; // --i;
    const int lastIndex = i; // const intIndex = i;
    while (i >= 0 && s[i] != ' ')
      --i;

    return lastIndex - i;
  }
};