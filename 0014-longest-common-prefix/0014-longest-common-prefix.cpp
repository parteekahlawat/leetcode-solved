class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans="";
        if(s.size()==1){
            return s[0];
        }
        int mn=INT_MAX;
        for(int i=0;i<s.size();i++){
            int tmp=0;
            tmp = s[i].size();
            mn = min(tmp, mn);
        }
        int i=0;
        while(i<mn){
            for(int j=0;j<s.size()-1;j++){
                if(s[j][i]!=s[j+1][i]){
                    return ans;
                }
                if(j==s.size()-2){
                    ans+=string(1, s[0][i]);
                }
                
            }
            i++;
        }
        return ans;
    }
};