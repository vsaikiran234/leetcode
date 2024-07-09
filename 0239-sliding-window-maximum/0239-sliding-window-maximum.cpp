class Solution { // class Solution 
 public: // public:
  vector<int> maxSlidingWindow(vector<int>& nums, int k) { // vector<int> maxSlidingWindow(vector<int>& nums, int k)
    vector<int> ans; // vector<int> ans;
    deque<int> maxQ; // deque<int> maxQ;

    for (int i = 0; i < nums.size(); ++i) { // for (int i = 0 ; i < nums.size(); ++i)
      while (!maxQ.empty() && maxQ.back() < nums[i]) // while (!maxQ.empty() && maxQ.back() < nums[i])
        maxQ.pop_back(); // maxQ.pop_back();
      maxQ.push_back(nums[i]); // maxQ.push_back(nums[i]);
      if (i >= k && nums[i - k] == maxQ.front())  // out-of-bounds // if (i >=k && nums[i - k])
        maxQ.pop_front(); //maxQ.pop_front();
      if (i >= k - 1) // if (i >= k - 1)
        ans.push_back(maxQ.front()); // ans.push_back(maxQ.front());
    }

    return ans; //return ans;
  }
};