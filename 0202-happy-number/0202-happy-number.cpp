class Solution { // class Solution {}
 public: // public:
  bool isHappy(int n) { // bool isHappy(int n)
    int slow = squaredSum(n); // int slow = sqauredSum(n);
    int fast = squaredSum(squaredSum(n));  // int fast = sqauredSum(squaredSum(n));

    while (slow != fast) { // while (slow != fast )
      slow = squaredSum(slow); // slow = squaredSum(slow);
      fast = squaredSum(squaredSum(fast)); // fas = squaredSum(squaredSum(fast());)
    }

    return slow == 1; // return slow == -1;
  }

 private: // privates:
  int squaredSum(int n) { //inr sumSquredSum(int n);

    int sum = 0; // int sum = 0;
    while (n) { // while (n) {}
      sum += pow(n % 10, 2);
      n /= 10; // n / 10 = 0;
    }
    return sum; // return sum;
  };
};