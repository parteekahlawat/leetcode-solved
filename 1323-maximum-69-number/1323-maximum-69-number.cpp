class Solution {
public:
    int maximum69Number (int num) {
        string a = to_string(num);
        for(int i=0;i<a.size();i++){
            if(a[i]!='9'){
                a[i]='9';
                break;
            }
        }
        return stoll(a);
    }
};