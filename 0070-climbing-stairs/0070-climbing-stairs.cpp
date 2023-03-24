class Solution {
public:
    int feb(int n, int dp[]){
        if(dp[n]!=-1){
            return dp[n];
        }
        else{
            if(n==1) return 1;
            if(n==2) return 2;
            dp[n] = feb(n-1, dp) + feb(n-2, dp);
        }
        return dp[n];
    }
    int climbStairs(int n) {
        int dp[n+1];
        for(int i=0;i<n+1;i++){
            dp[i]=-1;
        }
        return feb(n, dp);
    }
};