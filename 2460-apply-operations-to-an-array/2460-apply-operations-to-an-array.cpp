class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        vector<int>::iterator it1 = nums.begin();
        int i=0, cnt=1, ttl = nums.size();
        while(cnt!=ttl){
            if(nums[i]==0){
                nums.erase(it1);
                nums.push_back(0);
            }
            else{
                i++;
                it1++;
            }
            cnt++;
        }
        return nums;
    }
};