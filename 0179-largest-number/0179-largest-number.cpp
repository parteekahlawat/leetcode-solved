class Solution {
public:
    string largestNumber(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
           for(int j=i+1;j<nums.size();j++){
               string a = to_string(nums[i]), b = to_string(nums[j]);
               string ab = a+b;
               string ba = b+a;
               if(ab<ba){
                   int tmp = nums[i];
                   nums[i]=nums[j];
                   nums[j] = tmp;
               }
           } 
        }
        string ans;
        for(int i:nums){
            ans+=to_string(i);
        }
        int chk=0;
        for(char j:ans){
            if(j!='0'){
                chk=1;
            }
        }
        if(chk)
        return ans;
        else
        return "0";
    }
};