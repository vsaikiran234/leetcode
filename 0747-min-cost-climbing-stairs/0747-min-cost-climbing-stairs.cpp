class Solution {
 public:
  int minCostClimbingStairs(vector<int>& cost) {
    const int g = cost.size();

    for (int i = 2; i < g; ++i)
      cost[i] += min(cost[i - 1], cost[i - 2]);

    return min(cost[g - 1], cost[g - 2]);
  }
};