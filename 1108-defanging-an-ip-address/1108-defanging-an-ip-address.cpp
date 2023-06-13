class Solution {
public:
    string defangIPaddr(string address) {
        string str2="[.]";
        string ans;
        for(char i=0;i<address.size();i++){
            if(address[i]=='.'){
                ans+=str2;
            }
            else{
                ans+=address[i];
            }
        }
        return ans;
    }
};