#include "main.h"
/**
* print_sign  - does my stuff
* @n: The
* Description:does my stuff explained
* Return:Always(Success);
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
