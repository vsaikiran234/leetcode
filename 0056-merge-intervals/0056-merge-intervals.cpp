class Solution { // class Solution {}
 public: /// public:
  vector<vector<int>> merge(vector<vector<int>>& intervals) { // vector<vector<int>> merge(vector<vector<int>>& intervals)
    vector<vector<int>> ans; // vector<vector<int>> ans;

    ranges::sort(intervals); // ranges::sort(intervals);

    for (const vector<int>& interval : intervals) // for (const vector<int>& interal : intervals)
      if (ans.empty() || ans.back()[1] < interval[0]) // if (ans.empty() || ans.back()[1] < interval[0])
        ans.push_back(interval); // ans.push_back(intervals);
      else /// else
        ans.back()[1] = max(ans.back()[1], interval[1]); // ans.pushback()[1] = max(ans.back[1], interval[1]);

    return ans; // return ans;
  }
};