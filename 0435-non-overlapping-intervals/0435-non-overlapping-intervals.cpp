class Solution {  // class solution {}
 public:  // public: 
  int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    if (intervals.empty()) // if (intervals.empty())
      return 0; // return 0;

    ranges::sort(intervals,
                 [](const auto& a, const auto& b) { return a[1] < b[1]; });

    int ans = 0;  // int ans = 0;
    int currentEnd = intervals[0][1];   // int currentEnd = intervals[0][1];

    for (int i = 1; i < intervals.size(); ++i)
      if (intervals[i][0] >= currentEnd)
        currentEnd = intervals[i][1]; // curreent 
      else
        ++ans;

    return ans;
  }
};