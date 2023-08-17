#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_numbers  - does my stuff
* @separator: separatort
* @n: inta
* Description:does my stuff explained
* Return:Always(Success);
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;

if (n > 0)
{
va_start(args, n);

while (i < n)
{
printf("%d", va_arg(args, int));

if (i != n - 1 && separator != NULL)
	printf("%s", separator);
i++;
}
va_end(args);
}
printf("\n");
}
