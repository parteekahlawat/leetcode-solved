class Solution {
public:
    int minimumSum(int num) {
        vector<int> ans;
        while(num){
            ans.push_back(num%10);
            num/=10;
        }
        sort(ans.begin(), ans.end());
        int a = ans[0]*10 + ans[2];
        int b = ans[1]*10 + ans[3];
        return a+b;
    }
};