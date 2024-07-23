class Solution { // class Solution {}
 public: // public:
  int rangeBitwiseAnd(int m, int n) { // int rangeBitWiseAnd
    int shiftBits = 0; // int shiftBits = 0;

    while (m != n) { // while (m != n) {}
      m >>= 1; // m >>= 1;
      n >>= 1; // n >>= 1;
      ++shiftBits; // ++shiftBits;
    }

    return m << shiftBits; // return m << shiftBits;
  }
};