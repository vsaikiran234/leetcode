class Solution { // calss Solution {}
 public: // public:
  bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_set<int> seen; // unordered_set<int> seen;

    for (int i = 0; i < nums.size(); ++i) { // for (int i < n; i++);
      if (!seen.insert(nums[i]).second) // for (int m ,; j++ j < m)
        return true; // erturn true;
      if (i >= k) // if (i <=k);
        seen.erase(nums[i - k]);
    }

    return false; // eturn false;
  }
};