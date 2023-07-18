#include <stdio.h>
/**
* main  - does my stuff
* Description:does my stuff explained
* Return:Always(Success);
*/
int main(void)
{

	char *p = "_putchar\n";
	
	while (*p)
	{
		putchar(*p);
		p++;
	}

	return (0);
}
