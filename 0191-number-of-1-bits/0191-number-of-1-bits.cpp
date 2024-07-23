class Solution { // class Solution 
 public: // public:
  int hammingWeight(uint32_t n) { // int hammingweight(uint32_t n)
    int ans = 0; // int ans = 0;

    for (int i = 0; i < 32; ++i) // for (int i = 0; i , 32; ++i)
      if ((n >> i) & 1) // if ((n >> i) & 1)
        ++ans; // ++ans;

    return ans; // return ans;
  }
};