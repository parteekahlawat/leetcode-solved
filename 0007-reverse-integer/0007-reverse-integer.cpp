class Solution {
public:
    int reverse(int x) {
        long int ans = 0;
        char sign = '+';
        if(x<0)
            sign = '-';
        x = abs(x);
        while(x){
            int tmp = x%10;
            x/=10;
            ans = ans*10+tmp;
        }
        if(sign == '-')
            ans = -1*ans;
        if(ans>pow(2, 31)-1 || ans<-1*pow(2, 31))
            ans=0;
        return ans;
    }
};