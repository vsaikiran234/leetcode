class Solution { // class Solution {}
 public: // public:
  int minMutation(string start, string end, vector<string>& bank) { // int minMutation(string start, string end, vector<string>& bank) {}
    unordered_set<string> bankSet{bank.begin(), bank.end()}; // unordered_set<string> bankSet(Bank>begin(), becnk.end());
    if (!bankSet.contains(end)) // if (!bankSet.contains(end))
      return -1; // return -1;

    int ans = 0; // int ans = 0;
    queue<string> q{{start}}; // queue<string> q{{start}};

    while (!q.empty()) { // while(!q.empty())
      ++ans; // ++ans;
      for (int sz = q.size(); sz > 0; --sz) { // for (int sz = q.size(); sz > 0; --sz)
        string word = q.front(); // string word = q.front();
        q.pop(); // q.pop();
        for (int j = 0; j < word.length(); ++j) { // for (int j = 0; j < word.length(); ++j;)
          const char cache = word[j]; // const char cache = word[j];
          for (const char c : {'A', 'C', 'G', 'T'}) {
            word[j] = c;
            if (word == end)
              return ans;
            if (bankSet.contains(word)) {
              bankSet.erase(word);
              q.push(word);
            }
          }
          word[j] = cache;
        }
      }
    }

    return -1;
  }
};