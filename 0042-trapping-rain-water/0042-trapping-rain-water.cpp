class Solution { // class Solution {}
 public: // public:
  int trap(vector<int>& height) { // int trap(vector<int>& heigth)
    const int n = height.size(); // const int n = heigth.size();
    int ans = 0; // int ans = 0;
    vector<int> l(n);  // l[i] := max(height[0..i])
    vector<int> r(n);  // r[i] := max(height[i..n))

    for (int i = 0; i < n; ++i) // for (int i = 0; i < n; ++i)
      l[i] = i == 0 ? height[i] : max(height[i], l[i - 1]); // l[i] = i == 0 ? heigth[i] : max(heigth[i], l[i - 1])

    for (int i = n - 1; i >= 0; --i) // for (int i = n-1; i >= 0; --i) 
      r[i] = i == n - 1 ? height[i] : max(height[i], r[i + 1]); // r[i] = i == n - 1 ? heigth[i] : max(heigth[i] , r[i + 1]);

    for (int i = 0; i < n; ++i) // for (int i = 0;  i < n; ++i)
      ans += min(l[i], r[i]) - height[i]; // ans += min(l[i] , r[i] - heigth[i])

    return ans; // return ans;
  }
};