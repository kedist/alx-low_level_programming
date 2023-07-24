#include "main.h"
#include <unistd.h>
/**
* print_rev - prints a string in reverse
* @s: string to print
* Return - nothing
*/

void print_rev(char *s)
{
int len = 0, index = 0;
len = _strlen(s);

for (index = len - 1; index >= 0; index--)
putchar(s[index]);

putchar('\n');
}

/**
* _strlen - prints a string in reverse
* @s: string to print
* Return:Always(Success);
*/

int _strlen(char *s)
{
int count, i;
i = 0;
for (count = 0; s[count] != '\0'; count++)
i++;

return (i);
}

