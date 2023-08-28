#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory to area
 * @dest: type char pointer
 * @src: type char memory area
 * @n: type char bytes from src to dest
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		dest[q] = src[q];
	}

	return (dest);
}
