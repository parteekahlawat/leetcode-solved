class Solution {
public:
    int bnry_srch(vector<int> ar, int k){
        int n = ar.size();
        if(n==0){
            return -1;
        }
        int l = 0, h = n - 1;
        int mid;
        while(l<=h){
            mid = (l+h)/2;
            if(ar[mid]==k){
                return mid;
            }
            else if(ar[mid]>k){
                h = mid-1;
            }
            else if(ar[mid]<k){
                l = mid+1;
            }
        }
        if(ar[mid]>k){
            return mid;
        }
        else{
            return mid+1;
        }
    }
    int searchInsert(vector<int>& nums, int target) {
        return bnry_srch(nums, target);
    }
};