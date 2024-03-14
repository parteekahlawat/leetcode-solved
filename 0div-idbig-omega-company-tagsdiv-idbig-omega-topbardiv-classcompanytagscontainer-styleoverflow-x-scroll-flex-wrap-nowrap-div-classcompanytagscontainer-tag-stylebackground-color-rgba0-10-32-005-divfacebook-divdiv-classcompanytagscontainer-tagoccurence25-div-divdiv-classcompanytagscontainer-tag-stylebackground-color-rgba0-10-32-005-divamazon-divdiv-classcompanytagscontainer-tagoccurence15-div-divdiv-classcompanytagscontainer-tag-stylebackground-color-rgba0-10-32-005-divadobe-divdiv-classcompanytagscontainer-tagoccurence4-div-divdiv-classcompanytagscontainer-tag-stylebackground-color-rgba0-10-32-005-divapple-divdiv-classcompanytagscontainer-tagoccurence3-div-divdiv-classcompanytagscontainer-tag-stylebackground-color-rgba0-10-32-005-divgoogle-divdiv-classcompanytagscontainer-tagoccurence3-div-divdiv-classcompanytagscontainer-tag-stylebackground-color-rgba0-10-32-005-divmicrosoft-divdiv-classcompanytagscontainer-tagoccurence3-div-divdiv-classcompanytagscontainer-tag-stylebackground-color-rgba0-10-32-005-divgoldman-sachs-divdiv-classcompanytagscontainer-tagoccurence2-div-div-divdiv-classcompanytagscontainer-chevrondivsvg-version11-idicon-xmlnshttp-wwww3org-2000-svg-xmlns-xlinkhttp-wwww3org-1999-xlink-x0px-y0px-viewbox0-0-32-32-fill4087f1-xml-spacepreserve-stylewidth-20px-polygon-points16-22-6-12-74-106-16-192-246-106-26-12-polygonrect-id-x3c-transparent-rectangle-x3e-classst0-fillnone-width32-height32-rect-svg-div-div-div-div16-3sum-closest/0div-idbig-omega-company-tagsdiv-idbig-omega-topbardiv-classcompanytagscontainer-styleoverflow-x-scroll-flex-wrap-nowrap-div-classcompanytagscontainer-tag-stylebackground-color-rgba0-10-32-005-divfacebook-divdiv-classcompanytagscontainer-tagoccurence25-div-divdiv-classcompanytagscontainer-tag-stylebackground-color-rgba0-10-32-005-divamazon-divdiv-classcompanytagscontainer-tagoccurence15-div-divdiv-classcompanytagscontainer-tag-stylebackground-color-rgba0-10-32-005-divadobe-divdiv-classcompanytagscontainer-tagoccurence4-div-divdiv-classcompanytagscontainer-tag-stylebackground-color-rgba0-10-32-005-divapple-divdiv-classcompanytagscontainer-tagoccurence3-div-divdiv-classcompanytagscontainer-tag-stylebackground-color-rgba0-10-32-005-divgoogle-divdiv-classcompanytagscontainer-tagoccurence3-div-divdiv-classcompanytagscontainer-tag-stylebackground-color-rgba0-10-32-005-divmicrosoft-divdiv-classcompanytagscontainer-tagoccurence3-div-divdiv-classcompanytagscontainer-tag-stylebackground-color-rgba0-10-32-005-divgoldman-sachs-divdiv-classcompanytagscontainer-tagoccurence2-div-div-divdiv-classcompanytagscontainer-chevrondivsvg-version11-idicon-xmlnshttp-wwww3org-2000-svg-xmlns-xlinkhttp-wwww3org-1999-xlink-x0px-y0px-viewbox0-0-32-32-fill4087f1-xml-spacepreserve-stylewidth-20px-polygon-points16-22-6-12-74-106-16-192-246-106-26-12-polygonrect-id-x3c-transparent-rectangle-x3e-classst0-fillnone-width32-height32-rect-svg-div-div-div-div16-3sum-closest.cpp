class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        set<int> st;
        st.insert(INT_MAX);
        int ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1, k=n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==target){
                    return target;
                }
                else if(sum>target){
                    int a = *st.begin();
                    if(a > (sum-target)){
                        ans = sum;
                    }
                    st.insert(sum - target);
                    k--;
                }
                else{
                    int a = *st.begin();
                    if(a > (target-sum)){
                        ans = sum;
                    }
                    st.insert(target-sum);
                    j++;
                }
            }
        }
        return ans;
    }
};