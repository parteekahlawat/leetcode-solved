class Solution {
public:
    int addDigits(int num) {
        
        while(num/10!=0){
            int tmp = num%10;
            num/=10;
            num+=tmp;
        }
        return num;
    }
};