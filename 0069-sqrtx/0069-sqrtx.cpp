class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        long long int l = 1, h = x;
        long long int mid = (l+h)/2, ans;
        while(l<=h){
            mid = (l+h)/2;
            if(mid*mid == x){
                ans = mid;
                return ans;
            }
            else if(mid*mid > x){
                h = mid-1;
            }
            else {
                l = mid+1;
                ans = mid;
            }
        }
        return ans;
    }
};