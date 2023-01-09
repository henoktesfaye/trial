#include<stdio.h>

/**
 * main - main entry
 * Description: sum of two numbers less than 4000000
 * Return: Always 0
 */
int main(void)
{
	int i = 0, j = 0, k = 0;
	int sum = 0;

	while (k < 4000000)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0)
		{
			sum += k; 
		}
		k++
	}
	printf("%i\n", sum);
	return (0);
	
}
