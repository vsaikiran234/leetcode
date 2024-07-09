class MinStack { // class MinStack {}
 public: // public:
  void push(int x) { // void push(int x)
    if (stack.empty()) // if (stack.empty())
      stack.emplace(x, x); // stack.emplace(x, x);
    else //else
      stack.emplace(x, min(x, stack.top().second)); // satck.emplace(x, in(x, satck.top().second()))
  }

  void pop() { // void pop() {}
    stack.pop(); // satck.pop();
  }

  int top() { // int top()
    return stack.top().first; // return stack.top().first;
  }

  int getMin() { // int getMin()
    return stack.top().second;  // return stack.top().second;
  }

 private: // private:
  stack<pair<int, int>> stack;  // {x, min}
};