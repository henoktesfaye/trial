#include<stdio.h>

/**
 * main - main entry
 * Description: fibonacci sum until 50
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int x = 0, y = 1, z;

	while (i < 50)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu", z);
		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
