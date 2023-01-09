#include<unistd.h>
#include<stdio.h>

/**
 * _putchar - writes a character
 * @c: char to be printed
 * Return: none
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
