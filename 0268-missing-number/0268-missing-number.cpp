class Solution {
public:

    int missingNumber(vector<int>& nums) {
        // time complexity of O(n)
        
        int sm=0;
        for(int i:nums){
            sm+=i;
        }
        int n = nums.size();
        int sm_exp = n*(n+1)/2;
        return sm_exp-sm;

    }
};