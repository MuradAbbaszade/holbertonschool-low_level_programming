#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	int result, odd;

	while (n % 2 == 0)
	{
		result = 2;
		n /= 2;
	}
	for (odd = 3; odd <= sqrt(n); odd += 2)
	{
		while (n % odd == 0)
		{
			result = odd;
			n /= odd;
		}
	}
	if (n > 2)
		result = n;
	printf("%i\n", result);
	return (0);
}
