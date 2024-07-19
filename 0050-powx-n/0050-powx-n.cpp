class Solution { // class Solution {}
 public: // public:
  double myPow(double x, long n) { // double myPow(double x, long n) {}
    if (n == 0) // if (n == 0)
      return 1; // return 1;
    if (n < 0) // if (n < 0)
      return 1 / myPow(x, -n); // return 1 / myPow(x, -n)
    if (n % 2 == 1) // if (n % 2 == 1)
      return x * myPow(x, n - 1); // return x * myPow(x, n - 1);
    return myPow(x * x, n / 2); // return myPOw(x * x, n / 2);
  }
};