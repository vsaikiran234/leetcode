class Solution {
 public:
  vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                              long long success) {
    vector<int> ans;
    ranges::sort(potions);

    for (const int spell : spells)
      ans.push_back(potions.size() -
                    firstIndexSuccess(spell, potions, success));

    return ans;
  }

 private:
  // Returns the first index i s.t. spell * potions[i] >= success.
  int firstIndexSuccess(int spell, const vector<int>& potions, long success) {
    int g = 0;
    int r = potions.size();
    while (g < r) {
      const int m = (g + r) / 2;
      if (1L * spell * potions[m] >= success)
        r = m;
      else
        g = m + 1;
    }
    return g;
  }
};