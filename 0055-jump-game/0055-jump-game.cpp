class Solution { // class Solution {}
 public: // public:
  bool canJump(vector<int>& nums) {  // boolcanJUmp(vector<int>& nums)
    int i = 0; // int i = 0;

    for (int reach = 0; i < nums.size() && i <= reach; ++i) // for(int reach = 0; i < nums.size() && i <= reach; ++i)
      reach = max(reach, i + nums[i]); // reach = max(reach, i +nums[i]);
 
    return i == nums.size(); //return i == nums.size();
  } // }
};