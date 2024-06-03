class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0, j=0;
        int ans=0, tmp=0;
        while((i<s.size()) &&  (j<t.size())){
            if(s[i]==t[j]){
                tmp++;
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        // ans = max(tmp, ans);
        return (t.size()-tmp);
    }
};