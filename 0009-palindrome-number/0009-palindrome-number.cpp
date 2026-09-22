class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long newNum = 0;
        while(x>0) {
            int lastDigit = x%10;
            x = x/10;
            newNum = newNum*10 + lastDigit;
        }
        if(newNum == temp) return true;
        else return false;
    }
};