class Solution { // class Solution {}
 public: // public:
  bool isValid(string s) { // bool isValid(String s)
    stack<char> stack; // stack<char> stack;

    for (const char c : s) // for (const char c : s)
      if (c == '(') // if (c =='('))
        stack.push(')'); // stack.push(')');
      else if (c == '{')
        stack.push('}');
      else if (c == '[')
        stack.push(']');
      else if (stack.empty() || pop(stack) != c)
        return false;

    return stack.empty();
  }

 private:
  int pop(stack<char>& stack) {
    const int c = stack.top();
    stack.pop();
    return c;
  }
};