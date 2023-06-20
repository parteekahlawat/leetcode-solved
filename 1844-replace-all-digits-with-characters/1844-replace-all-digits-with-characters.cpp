class Solution {
public:
    string replaceDigits(string s) {
        for(int i=1;i<s.size();i+=2){
            int tmp = s[i]-'0';
            s[i] = s[i-1] + tmp;
        }
        return s;
    }
};