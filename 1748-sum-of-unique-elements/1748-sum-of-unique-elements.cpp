class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int mx=0;
        for(int i:nums){
            mx = max(i, mx);
        }
        vector<int> chk(mx+1);
        for(int i:nums){
            chk[i]++;
        }
        int sum=0;
        for(int i=0;i<chk.size();i++){
            if(chk[i]==1){
                sum+=i;
            }
        }
        return sum;
    }
};