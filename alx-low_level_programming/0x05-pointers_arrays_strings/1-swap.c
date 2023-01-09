#include"main.h"

/**
 * swap_int - swap numbers
 * @a: int a
 * @b: int b
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
