class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> a;
        for(int i:nums){
            a.push(i);
        }
        k--;
        while(k--){
            a.pop();
        }
        return a.top();
    }
};