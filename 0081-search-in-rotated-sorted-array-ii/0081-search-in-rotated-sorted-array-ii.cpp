class Solution {
public:
    int bnry_srch(vector<int> ar, int k, int n){
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
        return -1;
    }
    bool search(vector<int>& nums, int target) {
        int k=1, n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]<=nums[i]){
                k++;
            }
            else{
                break;
            }
        }
        vector<int> a1, a2;
        for(int i=0;i<k;i++){
            a1.push_back(nums[i]);
        }
        for(int i=k;i<n;i++){
            a2.push_back(nums[i]);
        }
        int ans = bnry_srch(a1, target, a1.size());
        if(ans==-1){
            ans = bnry_srch(a2, target, a2.size());
            if(ans!=-1){
                ans+=k;
            }
        }
        if(ans==-1){
            return false;
        }
        else{
            return true;
        }
    }
};