class Solution {
public:
    bool fun(vector<int>& a, int i, vector<int> &dp){
        if(i==a.size()-1) return true;
        
        if(i>=a.size()) return false;
        
        if(a[i]==0){ 
            dp[i]=0;
            return false;
        }
        
        for(int j=1;j<=a[i];j++){
            if(dp[i+j]==0) continue;
            if(fun(a, i+j, dp)){
                cout<<"run";
                return true;
            }
        }
        dp[i]=0;
        return false;
    }
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(), 1);
        return fun(nums, 0, dp);
    }
};