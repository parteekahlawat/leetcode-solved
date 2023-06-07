class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=0;
        vector<int> newnums;
        for(int i:nums){
            if(i!=val){
                ans++;
                newnums.push_back(i);
            }
        }
        nums = newnums;
        return ans;
    }
};