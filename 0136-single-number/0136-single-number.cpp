class Solution {     // class solution
 public:  // public:
  int singleNumber(vector<int>& nums) {  //int singleNumber(vector<int>& nums)
    int ans = 0;   // int ans = 0;

    for (const int num : nums)  // for (const int num : nums)
      ans ^= num;  // ans  ^= num;
 
    return ans; //return ans; return ans;
  }
};