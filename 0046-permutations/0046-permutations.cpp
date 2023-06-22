class Solution {
public:
    void fun(int i,int &n,vector<int> &v,vector<vector<int>> &ans){
        if(i>=n-1){
            ans.push_back(v);
            return;
        }
        for(int j = i; j < n; j++){
            swap(v[i],v[j]);
            fun(i+1,n,v,ans);
            swap(v[i],v[j]);
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        fun(0,n,nums,ans);
        return ans;
    }
};