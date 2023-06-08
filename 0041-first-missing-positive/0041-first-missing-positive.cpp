class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0, ans=1, j=1;
        while(i<nums.size()){
            if(nums[i]>0){
                if(nums[i]==j){
                    j++;
                    ans = j;
                }
                else if(nums[i]==j-1){
                    ans=j;
                }
                else{
                    return ans;
                }
            }
            i++;
        }
        return ans;
    }
};