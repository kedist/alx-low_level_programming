#include "3-calc.h"
/**
* op_add - does my stuff
* @a: num1
* @b: num2
* Description:does my stuff explained
* Return:Always(Success);
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - does my stuff
* @a: num1
* @b: num2
* Description:does my stuff explained
* Return:Always(Success);
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - does my stuff
* @a: num1
* @b: num2
* Description:does my stuff explained
* Return:Always(Success);
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div -es my stuff
* @a: num1
* @b: num2
* Description:does my stuff explained
* Return:Always(Success);
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("err\n");
		exit(15);
	}
return (a / b);
}
/**
* op_mod - does my stuff
* @a: num1
* @b: num2
* Description:does my stuff explained
* Return:Always(Success);
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("err\n");
		exit(15);
	}

return (a % b);
}
