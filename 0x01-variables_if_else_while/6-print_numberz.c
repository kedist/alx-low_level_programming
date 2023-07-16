#include <stdio.h>
/**
* main  - does my stuff
* Description:does my stuff explained
* Return:Always(Success);
*/
int main(void)
{
	int l;

for (l = 0 ; l < 10; l++)
putchar((l % 10) + '0');

putchar('\n');

return (0);
}
