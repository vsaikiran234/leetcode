class Solution {  // class Solution {}
 public: // public:
  vector<int> partitionLabels(string s) { //vector<int> partitionLabels(string s) {}
    vector<int> ans; // vector<int> ans;
    vector<int> rightmost(26); /// vector<int> rightmost(26);

    for (int i = 0; i < s.length(); ++i) // for (int i = 0; i < s.length(); ++i) 
      rightmost[s[i] - 'a'] = i; //rightmost[s[i] - 'a'] = i;

    int l = 0;  // the leftmost index of the current running string
    int r = 0;  // the rightmost index of the current running string

    for (int i = 0; i < s.length(); ++i) { // for (int i = 0; i < s.length(); ++i)
      r = max(r, rightmost[s[i] - 'a']); // r = max(r, rightmost[s[i] - 'a']);
      if (r == i) { //if (r === i)
        ans.push_back(i - l + 1); // ans.pushback(i - l + 1);
        l = i + 1;
      }
    }

    return ans; // return ans;
  }
};