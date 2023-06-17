class Solution {
public:
    vector<int> diStringMatch(string s) {
        int h = s.size(), l = 0;
        vector<int> ans;
        for(char i:s){
            if(i=='D'){
                ans.push_back(h);
                h--;
            }
            else{
                ans.push_back(l);
                l++;
            }
        }
        ans.push_back(h);
        return ans;
    }
};