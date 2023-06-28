class Solution {
public:
    int cnt(string s, char a){
        int ans=0;
        for(char i:s){
            if(i==a){
                ans++;
            }
        }
        return ans;
    }

    void fun(int n, string s, int i, int j, set<string>& ans){
        if(i<j){
            return;
        }
        if(s.size()==2*n){
            ans.insert(s);
            return;
        }
        if(cnt(s, '(')<n){
        fun(n, string(s+'('), i+1, j, ans);
        fun(n, string(s+')'), i, j+1, ans);
        }
        else{
        fun(n, string(s+')'), i, j+1, ans);
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        set<string> s;
        string a = "(";
        fun(n, a, 1, 0, s);
        vector<string> ans;
        for(string i:s){
            ans.push_back(i);
        }
        return ans;
    }
};