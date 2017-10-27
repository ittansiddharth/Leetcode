

Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321 

Note:
The input is assumed to be a 32-bit signed integer. Your function should return 0 when the reversed integer overflows.



class Solution {
public:
int reverse(int x) 
{
	long a = 0;
	int r;
    
    
while(x)
{
	r = x % 10;
	x = x / 10;
	a = (10 * a) + r;
}
	return (a < INT_MIN || a > INT_MAX) ? 0 : a;
}
};

