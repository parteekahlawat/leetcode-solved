class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0, rpt=0;
        int n=mat.size()-1;
        int j=0,i=0;
        while(i<=n){
            ans+=mat[i][j];
            i++;
            j++;
        }
        i=0;
        j=n;
        while(j>=0){
            ans+=mat[i][j];
            i++;
            j--;
        }
        if((n+1)%2!=0){
            rpt = mat[n/2][n/2];
        }
        ans-=rpt;
        return ans;
    }
};