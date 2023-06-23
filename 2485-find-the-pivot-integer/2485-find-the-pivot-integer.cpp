class Solution {
public:
    int pivotInteger(int n) {
        int ans=-1;
        float num = sqrt(n*(n+1)/2);
        int tmp=num;
        num = num-tmp;
        if(num==0.0){
            ans = tmp;
            return ans;
        }
        else
            return ans;
    }
};