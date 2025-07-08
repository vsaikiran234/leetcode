class Solution {
public:
    using T = tuple<long long, int, int, int>; // cost, i, j, time_parity

    long long minCost(int m, int n, vector<vector<int>>& waitCost) {
        vector<vector<vector<long long>>> dist(m, vector<vector<long long>>(n, vector<long long>(2, LLONG_MAX)));
        priority_queue<T, vector<T>, greater<T>> pq;

        dist[0][0][1] = (1LL * 1 * 1); // Start at (0,0) at time 1 (odd)
        pq.emplace(dist[0][0][1], 0, 0, 1);

        vector<pair<int, int>> dirs = {{1, 0}, {0, 1}}; // down, right

        while (!pq.empty()) {
            auto [cost, i, j, t] = pq.top(); pq.pop();
            if (dist[i][j][t] < cost) continue;

            if (t % 2 == 0) {
                // Even second → wait
                long long newCost = cost + waitCost[i][j];
                if (newCost < dist[i][j][1]) {
                    dist[i][j][1] = newCost;
                    pq.emplace(newCost, i, j, 1);
                }
            } else {
                // Odd second → move
                for (auto [di, dj] : dirs) {
                    int ni = i + di, nj = j + dj;
                    if (ni < m && nj < n) {
                        long long entryCost = 1LL * (ni + 1) * (nj + 1);
                        long long newCost = cost + entryCost;
                        if (newCost < dist[ni][nj][0]) {
                            dist[ni][nj][0] = newCost;
                            pq.emplace(newCost, ni, nj, 0);
                        }
                    }
                }
            }
        }

        return min(dist[m - 1][n - 1][0], dist[m - 1][n - 1][1]);
    }
};
