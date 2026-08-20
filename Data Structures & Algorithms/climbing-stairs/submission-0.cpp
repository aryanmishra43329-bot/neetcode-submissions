class Solution {
public:
    int solve(vector<int>&dp,int i, int n) {
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        if(i>n){
            return 0;
        }
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        if(dp[i]!=-1){
            return dp[i];
        }
        return dp[i]=solve(dp,i-1,n)+solve(dp,i-2,n);
    }
    int climbStairs(int n) {
        vector<int>dp(n+1);
        dp.assign(n+1,-1);
        return solve(dp,n,n);
    }
};