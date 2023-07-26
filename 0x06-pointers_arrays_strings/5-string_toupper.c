#include "main.h"

/**
 * string_toupper - changing to upper fun
 * @strs : p
 * Return: Always 0.
 */
char *string_toupper(char *strs)
{
	int a;

	for (a = 0; strs[a] != '\0'; a++)
	{
		if (strs[a] >= 'a' && strs[a] <= 'z')
		{
			strs[a] = strs[a] - 32;
		}
	}
	return (strs);
}
