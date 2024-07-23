class Solution { // class Solution {}
 public: // public:
  int singleNumber(vector<int>& nums) { // int singleNumber(vector<int>& nums)
    int ans = 0; // int ans = 0;

    for (int i = 0; i < 32; ++i) { // for (int i = 0; i < 32; ++i)
      int sum = 0; // int sum = 0;
      for (const int num : nums) // for (const int num : nums)
        sum += num >> i & 1; // sum += num >> i & 1;
      sum %= 3; // sum %= 3;
      ans |= sum << i; // ans |= sum << i;
    }

    return ans; // return ans;
  } 
};