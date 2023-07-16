#include <stdio.h>
/**
* main  - does my stuff
* Description:does my stuff explained
* Return:Always(Success);
*/
int main(void)
{
char l;

for (l = 'a'; l <= 'z'; l++)
{
if (l != 'e' && l != 'q')
putchar(l);
}

putchar('\n');

return (0);
}
