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

