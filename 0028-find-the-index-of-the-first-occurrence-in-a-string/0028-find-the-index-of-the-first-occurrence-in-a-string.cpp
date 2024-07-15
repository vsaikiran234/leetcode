class Solution { //class Solution {}
 public: // public:
  int strStr(string haystack, string needle) { // int strStr(string haystack, string needle )
    const int m = haystack.length(); // const int m = haystack.length();
    const int n = needle.length(); // const int n = needle.length();

    for (int i = 0; i < m - n + 1; i++) // for (int i = 0; i < m - n + 1; i++)
      if (haystack.substr(i, n) == needle) // if (haystack.substr(i, n) == needle)
        return i; // return i;

    return -1; // return -1;
  }
};