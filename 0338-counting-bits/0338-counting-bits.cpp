class Solution {       /// class solution {}
 public: public:
  vector<int> countBits(int n) { // vector<int> countBits(int n)
    // f(i) := i's number of 1s in bitmask
    // f(i) = f(i / 2) + i % 2
    vector<int> ans(n + 1); // vector<int> ans(n + 1);

    for (int i = 1; i <= n; ++i) // for (int i = 1;i < = n; ++i)
      ans[i] = ans[i / 2] + (i & 1);  // ans[i] = ans[i / 2] + (i & 1);

    return ans; // return ans;
  }
};