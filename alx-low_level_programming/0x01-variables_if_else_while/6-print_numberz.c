#include<stdio.h>

/**
 * main - main block
 * Description: prints base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
