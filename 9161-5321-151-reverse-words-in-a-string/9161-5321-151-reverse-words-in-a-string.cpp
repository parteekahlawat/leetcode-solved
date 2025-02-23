class Solution {
public:
    string reverseWords(string s) {
        vector<string> a;
        string word = "";
        for(char i : s){
            if(i==' ' && word!=""){
                a.push_back(word);
            }

            if(i==' '){
                word="";
            }
            else{
                word+=i;
            }
        }
        if(word!=""){
            a.push_back(word);
        }
        string ans="";
        for(int i=a.size()-1;i>=0;i--){
            ans+=a[i]+" ";
        }
        ans.pop_back();
        return ans;
    }
};