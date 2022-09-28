#include <ctype.h>

class Solution {
    private:
    long long int solution;
    int sign;
    int d;
public:
    Solution():solution(0), sign(1), d(0) {};
    int myAtoi(string s) {
        int i = 0;
            while (s[i] == ' ')
                i++;
            while (s[i] == '0')
            {
                this->d = 1;
                i++;
            }
            if (s[i] == '+' || s[i] == '-')
            {
                if (this->d == 1)
                    return 0;
                if(s[i] != '+')
                    sign *= -1;
                i++;
            }
            while (s[i] && isdigit(s[i]))
            {
                this->solution *= 10;
                this->solution += s[i] - 48;
                i++;
                if (this->solution > 2147483648)
                    break;
            }
            if (this->solution > 2147483647 && sign == 1)
                return 2147483647;
            else if ( this->solution > 2147483648 && sign == -1 )
                return -2147483648;
        return this->solution * this->sign;
    }
};