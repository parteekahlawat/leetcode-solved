class Solution {
public:
    int getLucky(string s, int k) {
        int n;
        string str;
        for(char i:s){
            int tmp = i-'a' + 1;
            str+=to_string(tmp);
        }
        while(k--){
            int tmp=0;
            for(char i:str){
                int val = i-'0';
                tmp+=val;
            }
            str = to_string(tmp);
        }
        return stoll(str);
    }
};