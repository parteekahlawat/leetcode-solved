class Solution {
public:
    int longestPalindromeSubseq(string a) {
        string b="";
        for(char i:a){
            b = i+b;
        }
        int n = a.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i-1]==b[j-1]){
                    dp[i][j] = dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        return dp[n][n];   
    }
};