class Solution {
public:
    int bnry_srch(vector<int> ar,int k){
        int n = ar.size();
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
        return -1;
    }
    int missingNumber(vector<int>& nums) {
        // complexity of O(nlog(n))
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<=n;i++){
            if(bnry_srch(nums, i)==-1){
                return i;
            }
        }
        return 0;
    }
};