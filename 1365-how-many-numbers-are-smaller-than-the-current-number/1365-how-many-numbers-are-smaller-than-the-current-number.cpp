class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int tmp=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    tmp++;
                }
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};