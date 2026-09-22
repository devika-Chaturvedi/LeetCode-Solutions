class Solution {
public:
    int reverse(int x) {
        long long newNum = 0;
        while(x>0 || x<0) {
            int lastDigit = x%10;
            x = x/10;
            newNum = newNum*10+lastDigit;
        }
        if(newNum < pow(-2, 31) || newNum > pow(2,31)-1) return 0;
        else return newNum;
    }
};