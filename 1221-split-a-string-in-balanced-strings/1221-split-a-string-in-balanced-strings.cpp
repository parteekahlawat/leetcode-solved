class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0;
        int cnt=0;
        for(char i:s){
            if(i=='R'){
                cnt++;
            }
            else
                cnt--;
            if(cnt==0)
                ans++;
        }
        return ans;
    }
};