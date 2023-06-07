class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans=1;
        vector<int> newnums;
        newnums.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                ans++;
                newnums.push_back(nums[i]);
            }
        }
        nums = newnums;
        return ans;
    }
};