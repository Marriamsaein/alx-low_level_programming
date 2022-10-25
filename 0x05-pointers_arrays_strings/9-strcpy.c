#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte.
 * @dest: char to check
 * @src: char to check
 *
 * Return: the pointer to dest
 * by marriam software solt
 */

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	while (src[b] != '\0')
	{
		b++;
	}

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
