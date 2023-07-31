#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to memory area
 * @n: the number of bytes
 * @b: constant byte
 *
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
