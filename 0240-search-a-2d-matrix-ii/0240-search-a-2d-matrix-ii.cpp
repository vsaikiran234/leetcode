class Solution { /// class Solution {}
 public: // public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int r = 0; // int r = 0;
    int c = matrix[0].size() - 1;  // int c = matrix[0].size() - 1;

    while (r < matrix.size() && c >= 0) { // while (r < matrix.size() && c >= 0)
      if (matrix[r][c] == target) // if (matrix[r][c] == target)
        return true; // return true;
      if (matrix[r][c] > target) // if (matrix[r][c] > target)
        --c; // --c;
      else //else
        ++r; // ++r;
    }

    return false; //return false;
  }
};
