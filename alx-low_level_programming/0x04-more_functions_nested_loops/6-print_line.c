#include "main.h"

/**
 * print_line - prints straight line
 * @n: number that is prinnted
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
