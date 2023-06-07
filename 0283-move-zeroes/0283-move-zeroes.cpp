class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = 0;
        vector<int> newnums;
        for(int i:nums){
            if(i!=0){
                newnums.push_back(i);
            }
            else{
                n++;
            }
        }
        for(int i=0;i<n;i++){
            newnums.push_back(0);
        }
        nums = newnums;
    }
};