class Solution {   //class Solution {}
 public:  //public:
  int maxProfit(vector<int>& prices, int fee) { //int maxProfit(vector<int>& pricews, int fee)
    int sell = 0;   // int sell = 0;
    int hold = INT_MIN; //int hold = INT_MAIN;

    for (const int price : prices) {   /// for (const int price : prices)
      sell = max(sell, hold + price);  //sell = max(sell , hold + price);
      hold = max(hold, sell - price - fee);   // hold = max(hold, sell - price - fee);
    }

    return sell;  // return sell;
  }
};