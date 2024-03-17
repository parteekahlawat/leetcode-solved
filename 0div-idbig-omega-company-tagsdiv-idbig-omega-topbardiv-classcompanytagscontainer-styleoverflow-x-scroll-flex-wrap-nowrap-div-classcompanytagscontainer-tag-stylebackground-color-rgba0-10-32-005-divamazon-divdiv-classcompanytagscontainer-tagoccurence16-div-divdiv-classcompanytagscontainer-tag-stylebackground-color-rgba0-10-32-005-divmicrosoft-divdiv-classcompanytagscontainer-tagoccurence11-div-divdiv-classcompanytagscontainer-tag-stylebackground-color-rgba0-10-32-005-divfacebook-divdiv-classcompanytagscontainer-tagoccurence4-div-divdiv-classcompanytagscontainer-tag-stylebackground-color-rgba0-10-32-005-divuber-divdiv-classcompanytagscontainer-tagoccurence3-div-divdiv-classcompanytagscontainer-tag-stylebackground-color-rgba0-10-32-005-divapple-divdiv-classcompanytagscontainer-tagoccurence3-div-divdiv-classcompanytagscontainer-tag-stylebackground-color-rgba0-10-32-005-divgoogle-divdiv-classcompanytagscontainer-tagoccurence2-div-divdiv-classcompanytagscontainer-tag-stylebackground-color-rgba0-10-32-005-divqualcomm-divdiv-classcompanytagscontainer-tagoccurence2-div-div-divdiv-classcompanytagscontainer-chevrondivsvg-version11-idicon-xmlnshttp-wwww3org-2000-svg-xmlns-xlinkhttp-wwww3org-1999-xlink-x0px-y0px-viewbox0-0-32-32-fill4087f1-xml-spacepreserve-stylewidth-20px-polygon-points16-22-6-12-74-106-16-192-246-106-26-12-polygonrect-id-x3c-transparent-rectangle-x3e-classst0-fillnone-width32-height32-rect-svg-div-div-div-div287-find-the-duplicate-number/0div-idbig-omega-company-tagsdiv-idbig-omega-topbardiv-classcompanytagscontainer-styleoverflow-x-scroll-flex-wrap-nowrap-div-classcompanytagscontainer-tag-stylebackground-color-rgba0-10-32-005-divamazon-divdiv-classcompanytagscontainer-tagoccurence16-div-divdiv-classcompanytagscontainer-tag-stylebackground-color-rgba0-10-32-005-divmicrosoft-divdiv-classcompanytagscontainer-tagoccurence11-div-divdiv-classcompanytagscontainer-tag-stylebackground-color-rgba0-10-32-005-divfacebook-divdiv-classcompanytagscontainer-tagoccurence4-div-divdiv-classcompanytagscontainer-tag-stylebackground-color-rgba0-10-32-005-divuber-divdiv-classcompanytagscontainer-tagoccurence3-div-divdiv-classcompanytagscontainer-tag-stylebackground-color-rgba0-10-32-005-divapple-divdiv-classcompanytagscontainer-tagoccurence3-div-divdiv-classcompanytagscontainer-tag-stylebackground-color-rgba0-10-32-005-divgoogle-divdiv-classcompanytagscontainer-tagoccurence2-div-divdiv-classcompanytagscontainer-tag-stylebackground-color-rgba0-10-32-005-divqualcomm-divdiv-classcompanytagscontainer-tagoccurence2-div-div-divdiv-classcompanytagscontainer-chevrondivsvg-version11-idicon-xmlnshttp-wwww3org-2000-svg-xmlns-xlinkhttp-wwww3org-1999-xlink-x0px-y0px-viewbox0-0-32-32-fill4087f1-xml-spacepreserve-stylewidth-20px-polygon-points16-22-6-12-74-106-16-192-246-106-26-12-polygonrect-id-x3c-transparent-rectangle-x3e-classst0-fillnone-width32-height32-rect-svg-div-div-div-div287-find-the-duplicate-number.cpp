class Solution {
public:
int bsearch(int l, int r, vector<int> arr, int x){
    
    return -1;
    }
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        while(i<nums.size()){
            int l = i+1;
            int r =  nums.size()-1;
            int x = nums[i];
            while (l <= r) {
        int m = l + (r - l) / 2;
        if (nums[m] == x)
            return nums[m];
        if (nums[m] < x)
            l = m + 1;
            r = m - 1;
        }
            i++;
        }
        return -1;
    }
};