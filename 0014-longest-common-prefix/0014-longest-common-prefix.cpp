class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans="";
        if(s.size()==1){
            return s[0];
        }
        int mn=200;
        for(int i=0;i<s.size();i++){
            mn = min(int(s[i].size()), mn);
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