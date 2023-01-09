#include "main.h"

/**
 * print_sign - print sign based on input
 * @n: input
 * Return: 0 -1 1 based on input
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
