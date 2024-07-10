class Solution { // class Solution {}
 public: // public:
  int maxProfit(vector<int>& prices) { // int maxProduct(vector<int>& prices)
    int sell = 0; // int sell = 0 ;
    int hold = INT_MIN;  // int hold = INT_MIN;

    for (const int price : prices) { // for (const int price : prices)
      sell = max(sell, hold + price); // sell = max(sell, hold + price);
      hold = max(hold, sell - price); // hold = max(hold, sell - price);
    }

    return sell; // return sell;
  }
};