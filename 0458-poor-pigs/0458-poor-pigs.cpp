class Solution {  // class Soluton 
 public: /// public:
  int poorPigs(int buckets, int minutesToDie, int minutesToTest) { // int poorPigs(int buckets, int minustesToDIe, intminutesToTest)
    const int base = minutesToTest / minutesToDie + 1; // const int base = minutesToTest / minutesToDie + 1;
        int ans = 0; // int ans = 0;
    for (int x = 1; x < buckets; x *= base) //for (int x = 1; x < buckets; x *= base)
      ++ans;  // ++ans;
    return ans;
  }
};


