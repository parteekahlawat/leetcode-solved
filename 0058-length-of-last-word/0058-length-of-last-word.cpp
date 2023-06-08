class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0, spc=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' '){
                if(spc==1){
                    return ans;
                }
            }
            else{
                spc=1;
                ans++;
            }
        }
        return ans;
    }
};