class Solution { // class Solution {}
 public: // public:
  vector<int> twoSum(vector<int>& numbers, int target) {
    int l = 0; // int l = 0;
    int r = numbers.size() - 1;  // int r  = numbers.size() - 1;

    while (numbers[l] + numbers[r] != target) // while (numbers[l] + numbers[r] != target)
      if (numbers[l] + numbers[r] < target) // if (numbers[l] + numbers[r] < target)
        ++l; // ++l;
      else // else 
        --r; //  --r;

    return {l + 1, r + 1}; /// return {l + 1, r + 1};
  }
};
    