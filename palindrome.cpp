class Solution {
public:
    bool isPalindrome(int x) {
int a = 0;
	int r;
	int n = x;
        if(n < 0)
        {
            std::cout<<"false";
            return 0;
        }
while(n != 0)
{
	r = n % 10;
	n = n / 10;
	a = 10 * a + r;
}
	if(a == x)
	{
		std::cout<<"true";
		return 1;
		
	}
	else
	{
		std::cout<<"false";
		return 0;
	}
    }
};
