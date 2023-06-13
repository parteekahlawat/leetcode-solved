class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        for(char i:jewels){
            for(char j:stones){
                if(i==j)
                    ans++;
            }
        }
        return ans;
    }
};