#include "main.h"
/**
*swap_int - swap two values 
*@a:first value
*@b:second value 
*Return: nothing
*/
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
