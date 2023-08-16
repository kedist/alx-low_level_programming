#include <stdio.h>
#include <stdlib.h>
/**
* main  - does my stuff
* @argv: no
* @argc: adfdf
* Description:does my stuff explained
* Return:Always(Success);
*/
int main(int argc, char *argv[])
{
char *f = (char *) (long int) main;
int i, n;

if (argc != 2)
{
printf("Error\n");
return (1);
}
n = atoi(argv[1]);
if (n < 0)
{
	printf("Error\n");
	return (1);
}
if (n > 0)
	printf("%02x", *f++);
	for (i = 1; i < n; i++)
	 printf("%02x", *f++);
	 printf("\n");
	 return (0);
}
