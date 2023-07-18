#include <stdio.h>
#include "main.h"
/**
* main  - does my stuff
* Description:does my stuff explained
* Return:Always(Success);
*/
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	putchar('\n');
}
