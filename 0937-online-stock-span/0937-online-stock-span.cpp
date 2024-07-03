class StockSpanner { // class stock
 public: // public:
  int next(int price) { //int next(int price)
    int span = 1; // int span = 1;
    while (!stack.empty() && stack.top().first <= price)
      span += stack.top().second, stack.pop(); //span += satck.top().second, stack.po()
    stack.emplace(price, span);
    return span; // return span;
  }

 private://// private
  stack<pair<int, int>> stack;  // (price, span)
};