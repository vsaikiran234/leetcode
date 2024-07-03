class Solution {  //class solution {
 public: // public:
  int minFlips(int a, int b, int c) {   // int minFlips(int a, int b, int c)
    constexpr int kMaxBit = 30; // constexpr int KMaxBit = 30;
    int ans = 0; // int ans = 0;

    for (int i = 0; i < kMaxBit; ++i)   // for (int i = 0l i < KMapBit; ++i)
      if (c >> i & 1) //if (c >> i & 1)
        ans += (a >> i & 1) == 0 && (b >> i & 1) == 0; // ans ++ (a >> i & 1 == 0 && (b >> i))
      else  // (c >> i & 1) == 0
        ans += (a >> i & 1) + (b >> i & 1);   // ans += (a >> i & 1) + (b >> i & 1)

    return ans;  // return ans;
  }
};