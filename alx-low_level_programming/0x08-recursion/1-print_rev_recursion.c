#include"main.h"

/**
 * _print_rev_recursion - prints string
 * @s: the string
 * Return: null
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
