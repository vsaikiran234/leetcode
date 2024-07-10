class Solution { // class Solution {}
 public: // public:
  int removeElement(vector<int>& nums, int val) { // int removeElement(vector<int>& nums, int val)
    int i = 0; // int i = 0;

    for (const int num : nums) // for (const int  num : nums)
      if (num != val) // if (num != val)
        nums[i++] = num; /// nums[i++] = nums;

    return i; // return i;
  }
};