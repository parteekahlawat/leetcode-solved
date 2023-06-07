class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int add = digits[digits.size()-1]+1;
        int cry=add/10, n=digits.size();
        add%=10;
        if(cry==0){
            digits[n-1] = add;
        }
        else{
            int i=n-1;
            while(i>=0){
                int tmp = digits[i]+cry;
                cry = tmp/10;
                tmp%=10;
                digits[i] = tmp;
                if(cry==0){
                    break;
                }
                i--;
            }
            if(i<0){
                digits.insert(digits.begin(), 1);
            }
        }
        return digits;
    }
};