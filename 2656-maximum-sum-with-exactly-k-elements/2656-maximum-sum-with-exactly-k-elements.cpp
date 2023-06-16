class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans=0;
        for(int i=0;i<k;i++){
            ans+=nums[n-1];
            nums[n-1] = nums[n-1]+1;
        }
        return ans;
    }
};