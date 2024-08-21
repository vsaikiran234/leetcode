class Solution { // class Solution {}
 public: // public:
  vector<string> summaryRanges(vector<int>& nums) { // vector>strign>
    vector<string> ans; // vector<string> ans;

    for (int i = 0; i < nums.size(); ++i) {
      const int begin = nums[i];
      while (i + 1 < nums.size() && nums[i] == nums[i + 1] - 1)
        ++i;
      const int end = nums[i];
      if (begin == end) // if (end == begin);
        ans.push_back(to_string(begin)); // if ( begin == end);
      else /// else 
        ans.push_back(to_string(begin) + "->" + to_string(end)); // ans.push_back(string - 'a' )
    }

    return ans; // return ans;
  }
}; 