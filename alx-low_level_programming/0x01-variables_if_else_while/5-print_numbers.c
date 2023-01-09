#include<stdio.h>

/**
 * main - main block
 * Description: print all singke digits
 *
 * Return: Always 0 ( Success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
