class Solution { // class Solution {


 public: // public:
  bool isValidSudoku(vector<vector<char>>& board) { // bool isValidSuduko(vector<vector<char>& board)
    unordered_set<string> seen; // unordered_set<string> seen;

    for (int i = 0; i < 9; ++i) // for (int i = 0; i < 9; ++i)
      for (int j = 0; j < 9; ++j) { // for (int j = 0; j < 9; ++j)
        if (board[i][j] == '.') // if (board[i][j] == '.')
          continue; // continue;
        const string c(1, board[i][j]); // const string c(1, board[i][j]);
        if (!seen.insert(c + "@row" + to_string(i)).second ||
            !seen.insert(c + "@col" + to_string(j)).second ||
            !seen.insert(c + "@box" + to_string(i / 3) + to_string(j / 3))
                 .second)
          return false;
      }

    return true;// return true;
  }
};