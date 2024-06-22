class Solution {
public:
     int numberOfSubarrays(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        int cnt=0;
        int k_i=0;//curr count
        bool flag=false;
        while(right<nums.size())
        {
            if(nums[right]%2!=0 )
            {
                k--;
                k_i=0;
            }
            while(k==0)
            {
                if(nums[left]%2!=0)
                    k++;
                
                k_i++;
                left++;
            }
            cnt+=k_i;
            right++;
            
        }
        return cnt;
    }
};