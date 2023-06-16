class Solution {
public:
    bool isHappy(int n) {
        set<int> a;
        while(1){
            int val=0;
            while(n){
                val+=pow((n%10),2);
                n/=10;
            }
            if(val==1){
                return true;
            }
            else if(a.find(val)!=a.end()){
                return false;
            }
            a.insert(val);
            n = val;
        }
        return false;
    }
};