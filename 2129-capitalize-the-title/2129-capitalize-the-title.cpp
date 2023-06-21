class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.size();
        vector<string> str;
        string tmp;
        for(char i:title){
            if(i==' '){
                str.push_back(tmp);
                tmp="";
                continue;
            }
            else{
                tmp+=i;
            }
        }
        str.push_back(tmp);
        for(int i=0;i<str.size();i++){
            if(str[i].size()<=2){
                str[i][0] = tolower(str[i][0]);
                str[i][1] = tolower(str[i][1]);
            }
            else{
                str[i][0] = toupper(str[i][0]);
                for(int j=1;j<str[i].size();j++){
                    str[i][j] = tolower(str[i][j]);
                }
            }
        }
        string ans="";
        for(int i=0;i<str.size();i++){
            ans+=str[i];
            if(i!=str.size()-1)
            ans+=" ";
        }
        return ans;
    }
};