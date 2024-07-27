class Solution { // class Solution {}
 public: // public:
  uint32_t reverseBits(uint32_t n) { // unit
    uint32_t ans = 0;

    for (int i = 0; i < 32; ++i)
      if (n >> i & 1)
        ans |= 1 << 31 - i;

    return ans;
  }
};