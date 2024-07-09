class Solution { // class Solution {}
 public: // public:
  int largestRectangleArea(vector<int>& heights) { // int largestRectangleArea(vector<int>& heights)
    int ans = 0; // int ans = 0;
    stack<int> stack; // satck<int> stackl;

    for (int i = 0; i <= heights.size(); ++i) { // for (int i = 0; i <= heigths.size)
      while (!stack.empty() &&
             (i == heights.size() || heights[stack.top()] > heights[i])) {
        const int h = heights[stack.top()]; // const int h = heights[stack.top()]
        stack.pop(); // stack.pop();
        const int w = stack.empty() ? i : i - stack.top() - 1; // const int w = stack.empty() ? i : i - stack.top() - 1;
        ans = max(ans, h * w); // ans = max(ans, h * w);
      }
      stack.push(i); // satck.push(i);
    }

    return ans; // return ans;
  }
};