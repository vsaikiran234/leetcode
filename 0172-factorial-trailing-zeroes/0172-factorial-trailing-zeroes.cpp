class Solution { // class Solution {}
 public: // public: 
  int trailingZeroes(int n) { // int trailingZeroes(int n)
    return n == 0 ? 0 : n / 5 + trailingZeroes(n / 5); // return n == 0 ? 0 : n / 5 + trailingZeroes(n / 5);
  }
};