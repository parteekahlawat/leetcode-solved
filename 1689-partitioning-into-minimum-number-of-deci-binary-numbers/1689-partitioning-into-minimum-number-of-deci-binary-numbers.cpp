class Solution {
public:
    int minPartitions(string n) {
        int mx=0;
        for(char i :n){
            int tmp = i-'0';
            mx = max(mx, tmp);
            if(mx==9){
                return 9;
            }
        }
        return mx;
    }
};