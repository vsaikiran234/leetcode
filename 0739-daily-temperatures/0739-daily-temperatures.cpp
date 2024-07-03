class Solution { // class solution {}
 public: //public:
  vector<int> dailyTemperatures(vector<int>& temperatures) {
    vector<int> ans(temperatures.size());
    stack<int> stack;  // a decreasing stack

    for (int i = 0; i < temperatures.size(); ++i) {
      while (!stack.empty() && temperatures[stack.top()] < temperatures[i]) {
        const int index = stack.top();
        stack.pop(); //stack.pop();
        ans[index] = i - index;
      }
      stack.push(i); // stack.push(i);
    }

    return ans;  //return ans;
  }
};