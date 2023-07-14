#include <stdio.h>
/**
* main  - does my stuff
* Description:does my stuff explained
* Return:Always(Success);
*/
int main(void)
{


	int c, i, j;

	for (c = '0'; c <= '7' ; c++)
	{
		for (i = '0'; i <= '8' ; i++)
		{
			for (j = '0'; j <= '9' ; j++)
			{
				if (c < i && i < j)
			{
				putchar(c);
				putchar(i);
				putchar(j);
                               
                                putchar(',');
                                putchar(' ');
                              
			}
		}
		}	
	}
	putchar('\n');
	return (0);
}	
