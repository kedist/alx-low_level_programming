#include <stdio.h>
/**
* main  - does my stuff
* Description:does my stuff explained
* Return:Always(Success);
*/
int main(void)
{
	int l;

for (l = 0 ; l <= 9; l++)
{
	putchar((l % 10) + '0');
	if (l == 9)
		break;
	putchar(',');
	putchar(' ');
}
putchar('\n');

return (0);
}
