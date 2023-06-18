class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int mx=0;
        for(int i=0;i<a.size();i++){
            int tmp=0;
            for(int j=0;j<a[i].size();j++){
                tmp+=a[i][j];
            }
            mx = max(tmp, mx);
        }
        return mx;
    }
};