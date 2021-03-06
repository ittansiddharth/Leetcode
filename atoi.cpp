Determine whether an integer is a palindrome. Do this without extra space.

class Solution {
public:
    int myAtoi(string str) {
    int sign = 1 , base = 0 , i = 0;
        while(str[i] == ' ')
        {
            i++;
        }
        if(str[i] == '+' || str[i] == '-')
        {
            sign = 1 - (2 * (str[i++] == '-'));
        }
        while(str[i] >= '0' && str[i] <= '9')
        {
            if(base > INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 7))
            {
                if(sign == 1) return INT_MAX; //INT_MAX and INT_MIN will require <limits.h> header these are macros for max and min values.
                else return INT_MIN;
            }
            base = 10 * base + (str[i++] - '0');
        }
        return base * sign;
            
}
};
