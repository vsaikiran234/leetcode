class Solution { // class Solution {}
 public: // public:
  int calculate(string s) { // int calculate(string s)
    int ans = 0; // int ans = 0;
    int num = 0; // int num = 0;
    int sign = 1; // int sign = 1;
    stack<int> stack{{sign}};  // stack.top() := the current environment's sign

    for (const char c : s) // for (const char c : s)
      if (isdigit(c)) // if (isdigit(c))
        num = num * 10 + (c - '0'); // num = num * 10 + (c - '0');
      else if (c == '(') // else if (c == '())
        stack.push(sign);
      else if (c == ')')
        stack.pop();
      else if (c == '+' || c == '-') {
        ans += sign * num;
        sign = (c == '+' ? 1 : -1) * stack.top();
        num = 0;
      }

    return ans + sign * num;
  }
};