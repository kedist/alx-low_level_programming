#include "main.h"
/**
 *_strlen - returns the lengt
 * @s: string
 *Return: returns l;
 */
int _strlen(char *s)
{
int  i = 0;

for (i= 0; s[i] != '\0'; i++)
i++;

return (i);
}
