class Solution { // class Solution {}
 public: // public:
  int maxProfit(int k, vector<int>& prices) { // int maxProfit(int k, vector<int>& prices)
    if (k >= prices.size() / 2) { // if (k >= prices.size() / 2)
      int sell = 0; // int sell = 0;
      int hold = INT_MIN; // int hold = INT_MIN;
 
      for (const int price : prices) {  // for (const int price : prices)
        sell = max(sell, hold + price); // sell = max(sell, hold + price);
        hold = max(hold, sell - price); // hold = max(hold, sell - price)
      }

      return sell; // return sell;
    }

    vector<int> sell(k + 1); // vector<int> sell (k + 1);
    vector<int> hold(k + 1, INT_MIN); // vector<int> hold(k + 1, INT_MIN);

    for (const int price : prices) // for (const int price : prices)
      for (int i = k; i > 0; --i) { // for (int i = k; i > 0; --i)
        sell[i] = max(sell[i], hold[i] + price); // sell[i] = max(sell[i], hold[i] + price);  
        hold[i] = max(hold[i], sell[i - 1] - price); // hold[i] = max(hold[i], sell[i - 1])
      }

    return sell[k]; // return sell[k];
  }
};