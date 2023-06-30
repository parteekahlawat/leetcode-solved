class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        int ans=0, sm=0;
        bool chk=0;
        for(char i:s){
            int val=INT_MIN;
            for(int j=0;j<chars.size();j++){
                if(chars[j]==i){
                    val = vals[j];
                    break;
                }
            }
            if(val==INT_MIN){
                chk=1;
                val = i-'a'+1;
            }
            
            sm+=val;
            if(sm<0){
                sm=0;
            }
            ans = max(sm, ans);
        }
        return ans;
    }
};