class Solution { //class Solution
 public: // public:
  int majorityElement(vector<int>& nums) { // int majorityElement(vector<int>& nums) {}
    int ans; /// int ans;
    int count = 0; // int count = 0;

    for (const int num : nums) { // for (const int num : nums)
      if (count == 0) // if (count == 0)
        ans = num; // ans = num;
      count += num == ans ? 1 : -1; // count += num == ans ? 1 : -1;
    }

    return ans; //return ans;
  }
};