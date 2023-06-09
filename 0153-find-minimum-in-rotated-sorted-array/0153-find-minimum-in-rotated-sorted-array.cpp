class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int h = nums.size()-1;
        if(nums.size()==1){
            return nums[0];
        }
        int mid = (l+h)/2;
        while(h-l!=1){
            mid = (l+h)/2;
            if(nums[mid]>nums[h]){
                l = mid;
            }
            else if(nums[mid]<nums[h]){
                h = mid;
            }
        }
        if(nums[l]>nums[h]){
            return nums[h];
        }
        else{
            return nums[l];
        }
    }
};