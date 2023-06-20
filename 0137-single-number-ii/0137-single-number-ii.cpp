class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0, powr=0;
        vector<int> cnt(32, 0);
        for(int i=0;i<nums.size();i++){
            int tmp =nums[i];
            for(int j=0;j<32;j++){
                int bit = tmp&(1<<j);
                if(bit){
                    cnt[j]++;
                }
            }
        }
        for(int i=0;i<cnt.size();i++){
            cnt[i] = cnt[i]%3;
        }
        for(int i=0;i<cnt.size();i++){
            ans+=cnt[i]*(1<<i);
        }
        return ans;
    }
};