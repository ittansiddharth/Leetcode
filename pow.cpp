Implement pow(x, n).

Example 1:

Input: 2.00000, 10
Output: 1024.00000

Example 2:

Input: 2.10000, 3
Output: 9.26100


SOLUTION

class Solution {
public:
    double myPow(double x, int n) {
        if(n == INT_MIN){
            return 1/(pow(x,INT_MAX) * x); 
        }
        else{
            return 1/pow(x,-n);
        }
    }
};
