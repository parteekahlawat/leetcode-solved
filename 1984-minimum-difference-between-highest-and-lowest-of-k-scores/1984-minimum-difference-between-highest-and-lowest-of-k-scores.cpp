class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=i+k-1;
        if(k==1){
            return 0;
        }
        int ans=INT_MAX;
        while(j<nums.size()){
            ans = min(ans, nums[j]-nums[i]);
            i++;
            j++;
        }
        return ans;
    }
};