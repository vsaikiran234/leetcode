class Solution { // class Solution {}
 public: // public:
  vector<string> fullJustify(vector<string>& words, size_t maxWidth) {
    vector<string> ans; // vector<string> ans;
    vector<string> row; // vector<string> row;
    size_t rowLetters = 0; // size_t rowLetters = 0;

    for (const string& word : words) { // for (const string& word : words)
      // If we place the word in this row, it will exceed the maximum width.
      // Therefore, we cannot put the word in this row and have to pad spaces
      // for each word in this row.
      if (rowLetters + row.size() + word.length() > maxWidth) { // if (rowLetters + row.size() + word.length() > maxWidth)
        const int spaces = maxWidth - rowLetters; // const int spaces = maxWidth - rowLetters;
        if (row.size() == 1) { // if (row.size() == 1)
          // Pad all the spaces after row[0]. 
          for (int i = 0; i < spaces; ++i) // for (int i = 0; i < spaces; ++i)
            row[0] += " "; // row[0] += " ";
        } else { // else{}
          // Evenly pad all the spaces to each word (expect the last one) in
          // this row.
          for (int i = 0; i < spaces; ++i) // for (int i = 0; i < spaces; ++i)
            row[i % (row.size() - 1)] += " "; // row[i % (row.size() -1)] += " ";
        }
        ans.push_back(join(row, "")); // ans.push_back(join(row, ""));
        row.clear(); // row.clear();
        rowLetters = 0; // rowLetters = 0;
      }
      row.push_back(word); // row.push_back(word);
      rowLetters += word.length(); // rowLetters += word.length();word.length();
    }
    ans.push_back(ljust(join(row, " "), maxWidth)); // ans.oush_back(ljust(join(row, ""), maxWidth))

    return ans; // return ans;
  }

 private: // private:
  string join(const vector<string>& words, const string& s) { // string join(const  vector<string>& words, const string& s)
    string joined; // string joined;
    for (int i = 0; i < words.size(); ++i) { // for (int i = 0; i < words.size(); ++i)
      joined += words[i]; // joined  == words[i];
      if (i != words.size() - 1) // if (i != wordsa.size() - 1)
        joined += s; // joined += s;
    }
    return joined; // return joined;
  }

  string ljust(string s, int width) { // string ljust(string s, int width)
    for (int i = 0; i < s.length() - width; ++i) // for (int i = 0; i < s.length() - width; ++i)
      s += " "; // s += " ";
    return s; // return s;
  }
};