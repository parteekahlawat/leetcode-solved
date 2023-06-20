class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int mx=0, sm=0;
        for(int i=0;i<n;i++){
            sm+=gain[i];
            mx = max(mx, sm);
        }
        return mx;
    }
};