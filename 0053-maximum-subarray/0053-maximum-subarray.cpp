class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=0, sm=0, pos=0;
        for(int i=0;i<nums.size();i++){
            sm+=nums[i];
            if(sm<0){
                sm=0;
            }
            if(nums[i]>=0){
                pos=1;
            }
            ans=max(sm, ans);
        }
        if(pos==0){
            ans=nums[0];
            for(int i:nums){
                ans = max(ans, i);
            }
        }
        return ans;
    }
};