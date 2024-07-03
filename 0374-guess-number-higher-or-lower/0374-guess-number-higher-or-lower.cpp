
class Solution {
 public:
  int guessNumber(int n) {
    int g = 1;
    int r = n;

    // Find the first guess number that >= the target number
    while (g < r) {
      const int m = g + (r - g) / 2;
      if (guess(m) <= 0)  // -1, 0
        r = m;
      else
        g = m + 1;
    }

    return g;
  }
};