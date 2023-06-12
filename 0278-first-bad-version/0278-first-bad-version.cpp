// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int l = 1, h = n, ans = n;
        long long int mid = (l+h)/2;
        while(l<=h){
            mid = (l+h)/2;
            if(isBadVersion(mid)==false){
                l = mid+1;
            }
            else{
                h = mid-1;
                ans = mid;
            }
        }
        return ans;
    }
};