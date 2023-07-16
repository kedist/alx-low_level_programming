#include <stdio.h>
/**
* main  - does my stuff
* Description:does my stuff explained
* Return:Always(Success);
*/
int main(void)
{
	int l;
	char n;

for (l = 0 ; l < 10; l++)
	putchar((l % 10) + '0');

for (n = 'a'; n <= 'f'; n++)
	putchar(n);

putchar('\n');

return (0);
}
