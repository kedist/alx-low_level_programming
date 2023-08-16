#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main  - does my stuff
* @argc: counter of arguments
* @argv: ptr to str
* Description:does my stuff explained
* Return:Always(Success);
*/

int main(int argc, char *argv[])
{
int a, b, c;
int (*oper)(int, int);

if (argc != 4)
{
printf("err\n");
exit(98);
}
oper = get_op_func(argv[2]);
if (oper == NULL)
{
printf("err\n");
exit(99);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
c = (*oper)(a, b);
printf("%d\n", c);

return (0);
}
