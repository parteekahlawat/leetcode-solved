class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ans(n);
        ans[0]=1;
        int pow2=0, pow3=0, pow5=0;
        for(int i=1;i<n;i++){
            ans[i] = min(ans[pow2]*2, min(ans[pow3]*3, ans[pow5]*5));
            if(ans[i]==ans[pow2]*2)
                pow2++;
            if(ans[i]==ans[pow3]*3)
                pow3++;
            if(ans[i]==ans[pow5]*5)
                pow5++;
        }
        return ans[n-1];
    }
};