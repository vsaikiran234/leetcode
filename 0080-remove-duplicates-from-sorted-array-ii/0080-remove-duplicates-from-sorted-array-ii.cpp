
class Solution { // class Solution {}
 public: // public:
  int removeDuplicates(vector<int>& nums) { // int  removeDuplicates(vector<int>& nums)
    int i = 0; // int i = 0; 
  
    for (const int num : nums) // for (const int num : nums)
      if (i < 2 || num > nums[i - 2]) // if (i < 2 || num > nums[i - 2])
        nums[i++] = num; // nums[i++] = num;

    return i; // return i;
  }
};