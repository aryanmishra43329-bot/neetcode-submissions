class Solution {
public:
    int dp[10000];
    int solve(vector<int>& cost, int i, int n) {
        if (i > n - 1) {
            return 0;
        }
        if (dp[i] != -1) {
            return dp[i];
        }
        return dp[i] = cost[i] + min(solve(cost, i + 1, n) , solve(cost, i + 2, n));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        fill(begin(dp),end(dp),-1);
        int m=solve(cost,0,n);
        int k=solve(cost,1,n);
        return min(m,k);
    }
};