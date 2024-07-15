class Solution { // calss Solution {}
 public: // public: 
  int minSubArrayLen(int s, vector<int>& nums) { // int minSubArrayLen(int s , vector<int>& nums)
    int ans = INT_MAX; // int ans = INT_MAX;
    int sum = 0; // int sum = 0;

    for (int l = 0, r = 0; r < nums.size(); ++r) { // for (int l = 0, r = 0; r < numss.size(); ++r)
      sum += nums[r];  // sum += nums[r];
      while (sum >= s) { // while(sum >= s)
        ans = min(ans, r - l + 1);
        sum -= nums[l++]; // sum -= nums[l++];
      }
    }

    return ans < INT_MAX ? ans : 0; // return ans < INT_MAX ? ans : 0;
  }
};