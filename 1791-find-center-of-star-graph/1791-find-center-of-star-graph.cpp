class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> a1 = edges[0], a2 = edges[1];
        if(a1[0]==a2[0]){
            return a1[0];
        }
        else if(a1[0]==a2[1]){
            return a1[0];
        }
        return a1[1];
    }
};