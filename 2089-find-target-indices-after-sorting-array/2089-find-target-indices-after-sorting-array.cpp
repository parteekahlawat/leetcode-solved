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
        return -1;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        if(bnry_srch(nums, target)==-1){
            vector<int> v;
            return v;
        }
        vector<int> v;
        int val = bnry_srch(nums, target);
        int a = val, b = val;
        while(a>0 && nums[a-1]==nums[val]){
            a--;
        }
        while(b<nums.size()-1 && nums[val]==nums[b+1]){
            b++;
        }
        for(int i=a;i<=b;i++){
            v.push_back(i);
        }
        return v;
    }
};