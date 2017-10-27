Implement int sqrt(int x).

Compute and return the square root of x.

class Solution {
public:
    int mySqrt(int x) {
        
        if(x == 0 || x == 1)
        {
            return x;
        }
        long result = 1,i = 1;
        while(result <= x)
        {
            if(result == x)
            {
                return i;
            }
            i++;
            result = i * i;
        }
        return i - 1;
    }
};
