class Solution {  // class Solution 
 public:   // public:
  int countNumbersWithUniqueDigits(int n) {  // int countNumberWithUniqueDigits(int n) 
    if (n == 0)  // if (n == 0)
      return 1;  // return 1;

    int ans = 10;   // int ans = 10;
    int uniqueDigits = 9;   // int uniqueDigits = 9;

    for (int availableNum = 9; n > 1 && availableNum > 0; --n, --availableNum) { // for (int availableNum)
      uniqueDigits *= availableNum;
      ans += uniqueDigits;
    }

    return ans;
  }
};