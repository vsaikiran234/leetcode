class Solution { // class Solution {}
 public: // public:
  int findDuplicate(vector<int>& nums) { // int findDuplicate(vector<int>& nums)
    int slow = nums[nums[0]]; // int slow = nums[nums[0]];
    int fast = nums[nums[nums[0]]]; // int fast = nums[nums[nums[0]]];

    while (slow != fast) { // while (slow !=  fast) {}
      slow = nums[slow]; // slow = nums[slow];
      fast = nums[nums[fast]]; // fast = nums[nums[fast]];
    }

    slow = nums[0]; // slow = nums[0];

    while (slow != fast) { // while (slow != fast)
      slow = nums[slow]; // slow = nums[slow];
      fast = nums[fast]; // fast = nums[fast];
    }

    return slow; // return slow;
  }
};