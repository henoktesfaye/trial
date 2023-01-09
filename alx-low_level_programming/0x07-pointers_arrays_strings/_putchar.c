#include "main.h"
#include<unistd.h>

/**
 * _putchar - writes words
 * @c: the character to print
 * Return: null
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
