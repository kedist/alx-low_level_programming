#include "function_pointers.h"
/**
* array_iterator - does my stuff
* @array: passed array
* @size: size of array
* @action: function ptr
* Description:does my stuff explained
* Return:Always(Success);
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array && action)
	for (i = 0; i < size; i++)
		action(array[i]);
}
