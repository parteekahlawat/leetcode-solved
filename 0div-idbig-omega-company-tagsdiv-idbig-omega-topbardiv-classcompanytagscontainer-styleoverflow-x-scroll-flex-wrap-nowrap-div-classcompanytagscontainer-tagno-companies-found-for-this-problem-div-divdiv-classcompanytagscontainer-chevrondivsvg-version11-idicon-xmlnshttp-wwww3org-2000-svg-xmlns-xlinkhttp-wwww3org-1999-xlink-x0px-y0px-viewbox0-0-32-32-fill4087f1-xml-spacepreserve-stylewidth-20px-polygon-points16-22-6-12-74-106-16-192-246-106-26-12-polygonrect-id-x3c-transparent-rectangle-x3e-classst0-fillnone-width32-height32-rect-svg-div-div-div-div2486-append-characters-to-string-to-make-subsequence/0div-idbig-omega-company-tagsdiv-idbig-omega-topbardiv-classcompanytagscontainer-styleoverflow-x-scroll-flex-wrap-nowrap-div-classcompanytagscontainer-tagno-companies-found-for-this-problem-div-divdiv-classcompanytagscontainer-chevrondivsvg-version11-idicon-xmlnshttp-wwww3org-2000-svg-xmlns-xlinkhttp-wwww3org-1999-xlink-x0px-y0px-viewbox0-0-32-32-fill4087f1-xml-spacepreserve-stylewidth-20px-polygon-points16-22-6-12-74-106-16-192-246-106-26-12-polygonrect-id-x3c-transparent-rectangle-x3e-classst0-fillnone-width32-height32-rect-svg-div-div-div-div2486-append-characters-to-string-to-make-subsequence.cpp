class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0, j=0;
        int tmp=0;
        while((i<s.size()) &&  (j<t.size())){
            if(s[i]==t[j]){
                tmp++;
                j++;
            }
            i++;
        }
        return (t.size()-tmp);
    }
};