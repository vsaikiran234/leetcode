class Solution { //class Solution 
public: // public:
  void setZeroes(vector<vector<int>>& matrix) { // void setZeroes(vector<vector<int>>& matrix)
    const int m = matrix.size(); // const int m = matrix.size();
    const int n = matrix[0].size(); // const int n = matrix[0].size();
    bool shouldFillFirstRow = false; // bool shouldFillFirstRow = false;
    bool shouldFillFirstCol = false; // bool shouldFill FirstCol = false;

    for (int j = 0; j < n; ++j) // for (int j = 0; j < n; ++j)
      if (matrix[0][j] == 0) { // if (matrix[0][j] == 0)
        shouldFillFirstRow = true; // shouldFillFirstRow = true;
        break; // break;
      }

    for (int i = 0; i < m; ++i) // for (int i = 0; i < m; ++i)
      if (matrix[i][0] == 0) { // if (matrix[i][0] == 0)
        shouldFillFirstCol = true; // shouldFillFirstCol = true;
        break; // break;
      }

    // Store the information in the first row and the first column.
    for (int i = 1; i < m; ++i) //for (int i = 1; i < m; ++i)
      for (int j = 1; j < n; ++j) // for (int j = 1; j < n; ++j)
        if (matrix[i][j] == 0) { // if(matrix[i][j] == 0)
          matrix[i][0] = 0; /// matrix[i][j] = 0;
          matrix[0][j] = 0; // matrix[0][j] = 0;
        }

    // Fill 0s for the matrix except the first row and the first column.
    for (int i = 1; i < m; ++i) // fpr (int i = 1;i < m; ++i)
      for (int j = 1; j < n; ++j) // for (int j = 1; j < n; ++j)
        if (matrix[i][0] == 0 || matrix[0][j] == 0) // if (matrix[i][0] == 0 || matrix[0][j] == 0)
          matrix[i][j] = 0; // matrix[i][j] = 0;

    // Fill 0s for the first row if needed.
    if (shouldFillFirstRow) // if(shoulkFillFirstRow)
      for (int j = 0; j < n; ++j) // for(int j = 0; j n; ++j)
        matrix[0][j] = 0; //matrix[0][j] = 0;

    // Fill 0s for the first column if needed.
    if (shouldFillFirstCol) // if (ShouldFillFiirstCol)
      for (int i = 0; i < m; ++i) // for (int i = 0; i < m; ++i)
        matrix[i][0] = 0; // matrix[i][0] = 0;
  }
};