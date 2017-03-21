/*
Given an integer n, return the number of trailing zeroes in n!.
Note: Your solution should be in logarithmic time complexity.
*/


int trailingZeroes(int n)
{
	int result = 0;
	for (long long i = 5; n / i>0; i *= 5)
	{
		result += (n / i);
	}
	return result;
}

void main()
{
	int x = trailingZeroes(4617);
	printf("x=%d", x);
}
