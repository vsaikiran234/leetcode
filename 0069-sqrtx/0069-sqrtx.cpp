class Solution { // class Solution {}
 public: // public:
  int mySqrt(int x) { // int mysqrt(int x)
  
    unsigned l = 1;  // unsigned l = 1;
    unsigned r = x + 1u; // unsigned r = x +1u;

    while (l < r) { // while (l < r) {}
      const unsigned m = (l + r) / 2; // const unsigned m = (l + r) / 2;
      if (m > x / m) // if (m > x / m)
        r = m; // r = m;
      else // else
        l = m + 1; // l = m + 1;
    } 

    // l := the minimum number s.t. l * l > x
    return l - 1; // return l - 1;
  }
};