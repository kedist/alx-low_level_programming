#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_all - does my stuff
* @format: separatort
* Description:does my stuff explained
* Return:Always(Success);
*/
void print_all(const char * const format, ...)
{
va_list val;
unsigned int j = 0, i = 0, cr = 0;
char *dstring;
const char l_arg[] = "csif";

va_start(val, format);
while (format && format[i])
{
if (format[i] == l_arg[j] && cr)
{
printf(",");
break;
}
j++;
switch (format[i])
{
	case 'c':
		printf("%c", va_arg(val, int)), cr = 1;
		break;
	case 's':
		dstring = va_arg(val, char *), cr = 1;
		if (!dstring)
		{
		printf("(nil)");
		break;
		}
		printf("%s", dstring);
		break;
	case 'i':
		printf("%d", va_arg(val, int)), cr = 1;
		break;
	case 'f':
		printf("%f", va_arg(val, double)), cr = 1;
		break;
}
i++;
printf("\n");
va_end(val);
}
}
