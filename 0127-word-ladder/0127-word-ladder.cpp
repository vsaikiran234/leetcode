class Solution { // calss Solution {}
 public: // public:
  int ladderLength(string beginWord, string endWord, vector<string>& wordList) { // int ladderLength(string beginWord)
    unordered_set<string> wordSet(wordList.begin(), wordList.end()); // unordered_set<string> wordset(wordList>begin(), wordList.end());
    if (!wordSet.contains(endWord)) // if (!wordset.contains(endWord))
      return 0; // return 0;

    int ans = 0; // int ans;
    queue<string> q{{beginWord}}; // ques<string> q{(beginWord)};

    while (!q.empty()) { // while (!q.empty())
      ++ans; // ++ans;
      for (int sz = q.size(); sz > 0; --sz) { // for (int sz = q.size(); sz > 0; --sz)
        string word = q.front(); // string word = q.front();
        q.pop(); // q.pop()
        for (int i = 0; i < word.length(); ++i) { // for (int i = 0; i < word.length(); ++i)
          const char cache = word[i]; // const char cache = word[i];
          for (char c = 'a'; c <= 'z'; ++c) { // for (char c = 'a'; c < = 'z' ; ++ c)
            word[i] = c; // word[i] = c;
            if (word == endWord) // if (word == endWord)
              return ans + 1; // return ans + 1;
            if (wordSet.contains(word)) { // if (wordSet.contains(word))
              q.push(word); // q.push(word);
              wordSet.erase(word); // wordSet.erase(word);
            }
          }
          word[i] = cache; // word[i] = cache;
        }
      }
    }

    return 0; // return 0;
  }
};