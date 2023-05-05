class Solution {
public:
    int longestCommonSubsequence(string a, string b) {
    int n=a.size(), m = b.size();
    int **dp;
    dp = new int*[n+1];
    for(int i=0;i<=n;i++){
        dp[i] = new int[m+1];
        for(int j=0;j<=m;j++){
            if(i!=0 && j!=0)
            dp[i][j] = -1;
            else
            dp[i][j] = 0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            
        if(a[i-1]==b[j-1]){
            dp[i][j] = dp[i-1][j-1] + 1;
        }
        else{
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
        }
    }
    return dp[n][m];
    }
};