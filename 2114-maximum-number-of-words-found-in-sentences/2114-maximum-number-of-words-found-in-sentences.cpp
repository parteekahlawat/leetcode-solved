class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(string i:sentences){
            int tmp=1;
            for(char j:i){
                if(j==' '){
                    tmp++;
                }
            }
            ans = max(ans, tmp);
        }
        return ans;
    }
};