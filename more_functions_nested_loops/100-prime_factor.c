#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
  long number = 612852475143;
  long i;

	for(i=2;i<n;i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			continue;
		}
	}
	printf("%ld\n", n);
	return (0);
}
