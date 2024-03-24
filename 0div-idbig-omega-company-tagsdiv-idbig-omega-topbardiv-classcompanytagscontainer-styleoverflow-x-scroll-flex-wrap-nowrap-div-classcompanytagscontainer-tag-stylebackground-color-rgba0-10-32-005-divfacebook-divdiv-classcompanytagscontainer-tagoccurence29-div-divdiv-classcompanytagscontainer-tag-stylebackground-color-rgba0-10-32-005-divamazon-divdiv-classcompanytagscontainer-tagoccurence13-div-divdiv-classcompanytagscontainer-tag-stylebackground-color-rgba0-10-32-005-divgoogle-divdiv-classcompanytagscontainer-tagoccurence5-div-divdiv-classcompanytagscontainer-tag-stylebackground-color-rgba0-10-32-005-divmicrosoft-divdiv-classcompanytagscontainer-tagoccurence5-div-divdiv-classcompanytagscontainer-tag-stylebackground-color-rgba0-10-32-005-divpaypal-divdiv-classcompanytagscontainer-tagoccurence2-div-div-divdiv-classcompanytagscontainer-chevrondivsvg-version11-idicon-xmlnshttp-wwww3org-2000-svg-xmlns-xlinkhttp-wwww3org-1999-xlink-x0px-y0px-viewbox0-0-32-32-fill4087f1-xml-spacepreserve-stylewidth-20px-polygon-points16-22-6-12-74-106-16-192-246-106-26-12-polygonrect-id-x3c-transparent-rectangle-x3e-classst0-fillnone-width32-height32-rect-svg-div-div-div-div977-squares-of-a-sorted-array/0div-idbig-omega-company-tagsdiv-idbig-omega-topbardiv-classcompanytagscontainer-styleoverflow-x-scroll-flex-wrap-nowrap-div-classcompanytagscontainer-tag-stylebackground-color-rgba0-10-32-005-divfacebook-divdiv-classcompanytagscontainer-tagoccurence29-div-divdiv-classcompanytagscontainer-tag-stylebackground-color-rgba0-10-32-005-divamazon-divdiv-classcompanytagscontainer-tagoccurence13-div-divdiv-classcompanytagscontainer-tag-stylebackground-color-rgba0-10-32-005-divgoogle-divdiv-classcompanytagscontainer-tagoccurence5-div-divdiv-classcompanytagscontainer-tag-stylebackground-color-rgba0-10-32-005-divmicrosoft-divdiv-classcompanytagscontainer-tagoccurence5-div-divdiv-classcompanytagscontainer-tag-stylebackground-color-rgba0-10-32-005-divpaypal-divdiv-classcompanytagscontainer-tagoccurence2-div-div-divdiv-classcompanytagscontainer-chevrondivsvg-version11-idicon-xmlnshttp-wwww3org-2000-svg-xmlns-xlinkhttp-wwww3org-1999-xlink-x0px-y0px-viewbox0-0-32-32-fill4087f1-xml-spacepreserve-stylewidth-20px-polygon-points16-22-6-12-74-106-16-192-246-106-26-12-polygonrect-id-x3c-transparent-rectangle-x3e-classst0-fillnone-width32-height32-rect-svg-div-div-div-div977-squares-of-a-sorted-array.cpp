class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        set<pair<int, int>> st;
        int ind=0;
        for(int i:nums){
            st.insert({i*i, ind});
            ind++;
        }
        vector<int> ans;
        for (auto it = st.begin(); it!=st.end();it++)
    {
        ans.push_back((*it).first);
    }
        return ans;
    }
};