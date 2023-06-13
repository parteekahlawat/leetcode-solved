class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int ans=-1;
        int sm1=0, sm2=0;
        for(int i=1;i<nums.size();i++){
            sm2+=nums[i];
        }
        if(sm1==sm2){
            return 0;
        }
        for(int i=1;i<nums.size();i++){

            sm1+=nums[i-1];
            sm2-=nums[i];
            if(sm1==sm2){
                return i;
            }
        }
        return ans;
    }
};