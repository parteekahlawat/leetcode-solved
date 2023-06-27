class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans=0;
        while(x!=0 || y!=0){
            int a = 1&x, b = 1&y;
            if(a^b == 1){
                ans++;
            }
            x = x>>1;
            y = y>>1;
        }
        return ans;
    }
};