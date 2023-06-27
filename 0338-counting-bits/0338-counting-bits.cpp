class Solution {
public:
    int cntbit(int n){
        if(n==0) return 0;
        
        return cntbit(n>>1)+(1&n);
    }
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i=0;i<=n;i++){
            ans[i] = cntbit(i);
        }
        return ans;
    }
};