class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<char> ans;
        for(char i:words[0]){
            ans.push_back(i);
        }
        for(string i:words){
            
            int k=0;
            while(k<ans.size()){
                int chk=0;
                for(int j=0;j<i.size();j++){
                    if(i[j]==ans[k]){
                        chk=1;
                        i.erase(i.begin()+j);
                        break;
                    }   
                }
                if(chk==0){
                    ans.erase(ans.begin()+k);
                }
                else{
                    chk=0;
                    k++;
                }
            }
        }
        vector<string> tmp;
        for(char i:ans){
            string s(1, i);
            tmp.push_back(s);
        }
        return tmp;
    }
};