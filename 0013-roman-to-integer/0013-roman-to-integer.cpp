class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        int n = s.size();
        map<char, int> roman;
        roman.insert({'I', 1});
        roman.insert({'V', 5});
        roman.insert({'X', 10});
        roman.insert({'L', 50});
        roman.insert({'C', 100});
        roman.insert({'D', 500});
        roman.insert({'M', 1000});
        for(int i=0;i<s.size();i++){
            char tmp = s[i];
            if(i!=n-1){
                char chk = s[i+1];
            if(roman[tmp]>=roman[chk])
            ans+=roman[tmp];
            else{
                ans+= roman[chk]-roman[tmp];
                i++;
            }
            }
            else{
                ans+=roman[tmp];
                
            }
            // cout<<ans<<endl;
        }
        return ans;
    }
};