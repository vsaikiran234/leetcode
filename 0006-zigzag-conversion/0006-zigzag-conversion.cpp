class Solution { // calss Solution 
 public: // public:
  string convert(string s, int numRows) { // string convert(string s, int numRows)
    string ans; // string ans;
    vector<vector<char>> rows(numRows); // vector<vector<char>> rows(numRows);
    int k = 0; // int k = 0;
    int direction = (numRows == 1) - 1;  // int direction = (numRows == 1);

    for (const char c : s) { // for (const char c : s)
      rows[k].push_back(c); // rows[k].push_back(c);

      if (k == 0 || k == numRows - 1) // if (k == 0|| k == numsRows - 1)
        direction *= -1; // direction *= -1;
      k += direction; // k += direction;
    }

    for (const vector<char>& row : rows) //for (cont vector<char>& row : rows)
      for (const char c : row) // for (const char c : row)
        ans += c; // ans += c;

    return ans; // return ans;
  }
};