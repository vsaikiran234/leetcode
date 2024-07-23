class Solution { // class Solution {}
 public: // public:
  bool isPalindrome(int x) { // bool isPalindrom(int x)
    if (x < 0) // if (x < 0)
      return false; // return fasle;

    long reversed = 0; // long reversed = 0;
    int y = x; // int y = x;

    while (y > 0) { // while (y > 0)
      reversed = reversed * 10 + y % 10; // reversed = reversed * 10 + y % 10;
      y /= 10; // y /= 10;
    }

    return reversed == x; // return reveresed == x;
  }
};