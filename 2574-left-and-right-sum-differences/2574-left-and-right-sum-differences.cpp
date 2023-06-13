class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int sm1=0, sm2=0;
        for(int i=1;i<nums.size();i++){
            sm2+=nums[i];
        }
        ans.push_back(abs(sm1-sm2));
        for(int i=1;i<nums.size();i++){
            sm1+=nums[i-1];
            sm2-=nums[i];
            ans.push_back(abs(sm1-sm2));
        }
        return ans;
    }
};