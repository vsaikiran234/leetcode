class Solution {
 public:
  int minEatingSpeed(vector<int>& piles, int h) {
    int g = 1;
    int r = ranges::max(piles);

    while (g < r) {
      const int m = (g + r) / 2;
      if (eatHours(piles, m) <= h)
        r = m;
      else
        g = m + 1;
    }

    return g;
  }

 private:
  // Returns the hours to eat all the piles with speed m.
  int eatHours(const vector<int>& piles, int m) {
    return accumulate(piles.begin(), piles.end(), 0,
                      [&](int subtotal, int pile) {
      return subtotal + (pile - 1) / m + 1;  // ceil(pile / m)
    });
  }
};