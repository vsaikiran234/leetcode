class Solution { // class Solution {}
 public: // public:
  void sortColors(vector<int>& nums) { // void sortColors(vector<int>& nums)
    int zero = -1; // int zero = -1;
    int one = -1; // int one = -1;
    int two = -1; // int two = -1;

    for (const int num : nums) // for )const int num : nums)
      if (num == 0) { // if (num == 0)
        nums[++two] = 2; // nums[++two] = 2;
        nums[++one] = 1; // nums[++one] = 1;
        nums[++zero] = 0; // nums[++zero] = 0;
      } else if (num == 1) { // } ele if (num == 1)
        nums[++two] = 2; // nums[++two] = 2;
        nums[++one] = 1; // nums[++one] = 1;
      } else { // else {}
        nums[++two] = 2; // nums[++two]
      }
  }
};