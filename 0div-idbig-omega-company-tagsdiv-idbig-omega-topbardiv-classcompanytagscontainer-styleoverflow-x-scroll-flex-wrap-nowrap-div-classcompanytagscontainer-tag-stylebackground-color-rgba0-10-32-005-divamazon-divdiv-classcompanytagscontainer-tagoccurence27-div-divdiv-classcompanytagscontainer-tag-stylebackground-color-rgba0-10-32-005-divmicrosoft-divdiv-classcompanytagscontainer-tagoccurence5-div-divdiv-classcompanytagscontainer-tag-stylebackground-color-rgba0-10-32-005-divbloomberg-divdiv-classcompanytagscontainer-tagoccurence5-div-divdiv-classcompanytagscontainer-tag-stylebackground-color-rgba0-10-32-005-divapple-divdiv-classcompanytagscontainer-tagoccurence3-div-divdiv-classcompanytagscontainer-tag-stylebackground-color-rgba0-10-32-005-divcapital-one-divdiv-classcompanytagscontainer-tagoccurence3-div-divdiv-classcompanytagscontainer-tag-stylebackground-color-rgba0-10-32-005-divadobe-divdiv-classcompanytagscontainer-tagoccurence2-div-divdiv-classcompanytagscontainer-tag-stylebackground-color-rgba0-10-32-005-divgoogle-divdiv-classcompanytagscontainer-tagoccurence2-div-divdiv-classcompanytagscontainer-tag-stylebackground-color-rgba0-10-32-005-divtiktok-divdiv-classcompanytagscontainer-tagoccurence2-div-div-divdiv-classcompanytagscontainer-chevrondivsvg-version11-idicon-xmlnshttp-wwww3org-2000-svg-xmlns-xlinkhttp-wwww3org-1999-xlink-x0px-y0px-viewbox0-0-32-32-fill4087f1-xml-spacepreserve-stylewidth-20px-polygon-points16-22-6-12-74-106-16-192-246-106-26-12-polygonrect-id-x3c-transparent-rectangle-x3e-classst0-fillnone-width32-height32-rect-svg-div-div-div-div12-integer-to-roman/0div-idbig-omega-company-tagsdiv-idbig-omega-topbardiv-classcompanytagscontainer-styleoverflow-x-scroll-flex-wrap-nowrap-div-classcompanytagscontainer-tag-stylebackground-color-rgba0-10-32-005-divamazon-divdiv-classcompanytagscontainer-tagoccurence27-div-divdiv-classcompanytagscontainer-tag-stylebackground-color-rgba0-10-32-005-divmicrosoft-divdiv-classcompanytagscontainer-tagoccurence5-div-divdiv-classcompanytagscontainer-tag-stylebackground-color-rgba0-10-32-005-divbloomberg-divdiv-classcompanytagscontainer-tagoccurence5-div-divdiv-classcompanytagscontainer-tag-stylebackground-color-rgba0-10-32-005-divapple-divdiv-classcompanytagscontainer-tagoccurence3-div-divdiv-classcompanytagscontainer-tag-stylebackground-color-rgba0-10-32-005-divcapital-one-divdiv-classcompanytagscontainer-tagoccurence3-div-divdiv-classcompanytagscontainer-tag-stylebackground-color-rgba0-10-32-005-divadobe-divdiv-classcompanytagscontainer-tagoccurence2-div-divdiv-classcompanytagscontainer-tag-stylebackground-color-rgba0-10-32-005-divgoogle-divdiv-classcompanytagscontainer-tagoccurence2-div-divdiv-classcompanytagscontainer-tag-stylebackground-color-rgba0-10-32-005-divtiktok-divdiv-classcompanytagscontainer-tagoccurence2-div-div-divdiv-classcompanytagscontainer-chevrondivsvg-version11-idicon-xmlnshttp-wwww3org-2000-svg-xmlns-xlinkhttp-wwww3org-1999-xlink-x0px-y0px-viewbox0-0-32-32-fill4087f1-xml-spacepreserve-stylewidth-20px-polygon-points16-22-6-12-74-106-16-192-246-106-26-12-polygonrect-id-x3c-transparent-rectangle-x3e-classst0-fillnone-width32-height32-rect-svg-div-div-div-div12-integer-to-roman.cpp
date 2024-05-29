class Solution {
public:
    string intToRoman(int num) {
        //'I' = 1, 'X' = 10, 'C' = 100, 'M' = 1000, 'V' = 5, 'L' = 50, 'D' = 500;
        // Subtractive Notation
        // Number	 4	 9	 40     90      400     900
        // Notation	 IV	 IX	 XL	XC	CD      CM
        string res = "";
        while(num >= 1000){
            num -= 1000;
            res.push_back('M');
        }
        if(num >= 900){
            num -= 900;
            res.append("CM");
        }
        if(num >= 500){
            num -= 500;
            res.push_back('D');
        }
        if(num >= 400){
            num -= 400;
            res.append("CD");
        }
        while(num >= 100){
            num -= 100;
            res.push_back('C');
        }
        if(num >= 90){
            num -= 90;
            res.append("XC");
        }
        if(num >= 50){
            num -= 50;
            res.push_back('L');
        }
        if(num >= 40){
            num -= 40;
            res.append("XL");
        }
        while(num >= 10){
            num -= 10;
            res.push_back('X');
        }
        if(num >= 9){
            num -= 9;
            res.append("IX");
        }
        if(num >= 5){
            num -= 5;
            res.push_back('V');
        }
        if(num >= 4){
            num -= 4;
            res.append("IV");
        }
        while(num > 0){
            num -= 1;
            res.push_back('I');
        }
        return res;
    }
};