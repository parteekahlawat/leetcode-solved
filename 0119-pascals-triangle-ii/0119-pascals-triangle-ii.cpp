class Solution {
public:
    vector<vector<int>> fun(int n){
        vector<vector<int>> dp;
        if(n==1){
            vector<int> temp;
            temp.push_back(1);
            dp.push_back(temp);
            return dp;
        }
        dp = fun(n-1);
        vector<int> a = dp[dp.size()-1];
        vector<int> add;
        add.push_back(1);
        for(int i=0;i<a.size()-1;i++){
            int p = a[i], q = a[i+1];
            add.push_back(p+q);
        }
        add.push_back(1);
        dp.push_back(add);
        return dp;
    }
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans = fun(rowIndex+1);
        return ans[ans.size()-1];
    }
};