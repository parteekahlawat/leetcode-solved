class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int ans=0, n = piles.size();
        n--;
        int i=0, j=n-1;
        while(i<j){
            ans+=piles[j];
            j-=2;
            i++;
        }
        return ans;
    }
};