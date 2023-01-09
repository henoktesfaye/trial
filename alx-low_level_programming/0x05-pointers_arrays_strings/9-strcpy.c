#include"main.h"

/**
 * _strcpy - copies the string
 * @dest: destination
 * @src: source
 * Return: the pointer to dust
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
