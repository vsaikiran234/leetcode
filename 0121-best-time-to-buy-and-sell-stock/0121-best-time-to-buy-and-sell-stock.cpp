class Solution {  // class Solution {}
 public: // public:
  int maxProfit(vector<int>& prices) { // int (maxProfit vector<int>& prices)
    int sellOne = 0; // int sellOne = 0; 
    int holdOne = INT_MIN; // int holdOne = INT_MIN;

    for (const int price : prices) { // for (const int price : prices)
      sellOne = max(sellOne, holdOne + price); // sellone = max(sellOne, holdOne + price);
      holdOne = max(holdOne, -price); // holdOne = max(holdOne, -price);
    }

    return sellOne; //return sellOne;
  }
};