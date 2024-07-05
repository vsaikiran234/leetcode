
class Solution { // class Solution {}
 public: // public:
  int longestConsecutive(vector<int>& nums) { // int longestConsecutive(vector<int>& nums)
    int ans = 0; // int ans 0;
    unordered_set<int> seen{nums.begin(), nums.end()}; // unordered_set<int> seen{nums.begin(), nums.end()}

    for (int num : nums) { // for (int num : nums) {}
      // `num` is the start of a sequence.
      if (seen.count(num - 1)) // if (seen.count(num - 1))
        continue; // continue;
      int length = 1; // int length = 1;
      while (seen.count(++num)) // while (seen.count(++num))
        ++length; //++length;
      ans = max(ans, length); //ans = max(ans, length)
    }

    return ans; // return ans;
  }
};