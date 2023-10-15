#include<stdio.h>

/**
 * main - Entry
 *
 * Description: 'print with  putchar()'
 * Return: Always 1 (Success)
 */
int main(void)
{
	char st[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	int n = 0;

	while (st[n] != '\0')
	{
		putchar(st[n]);
		n++;
	}
	return (1);
}
