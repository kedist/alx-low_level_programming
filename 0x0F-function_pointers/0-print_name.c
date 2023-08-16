#include "function_pointers.h"
/**
* print_name - does my stuff
* @name: name to be printed
* @f: pointer to function
* Description:does my stuff explained
* Return:Always(Success);
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
	f(name);
}
