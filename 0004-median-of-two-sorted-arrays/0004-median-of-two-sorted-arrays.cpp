class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        for(int i=0;i<m;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        int val = n+m;
        float ans;
        if(val%2==0){
            val/=2;
            ans = nums1[val] + nums1[--val];
            ans/=2;
        }
        else{
            val/=2;
            ans = nums1[val];
        }
        return ans;
    }
};