class Solution { // class Solution {}
 public: // public:
  int jump(vector<int>& nums) { // int jump(vector<int>& nums)
    int ans = 0; // int ans = 0;
    int end = 0; // int end = 0;
    int farthest = 0; // int farthest = 0;

    // Start an implicit BFS.
    for (int i = 0; i < nums.size() - 1; ++i) { // for(int i = 0; i < num.size() - 1; ++i)
      farthest = max(farthest, i + nums[i]); // farthest = max(farthest, i + nums[i]);

      if (farthest >= nums.size() - 1) { // if (farthest >= nums.size() - 1)
        ++ans; // ++ans;
        break; //break;
      }
      if (i == end) {    // Visited all the items on the current level.
        ++ans;           // Increment the level.
        end = farthest;  // Make the queue size for the next level.
      }
    }

    return ans; // return ans;
  }
};