#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 * Description: Sum of mulitple of 5 and 3
 * Return: 0
 */
int main(void)
{
	int n = 0;
	int add = 0;

	while (n < 1024)
	{
		if (n % 5 == 0 ||  n % 3 == 0)
		{
			add += n;
		}
		n++;
	}
	printf("%i\n", add);
	return (0);
}
