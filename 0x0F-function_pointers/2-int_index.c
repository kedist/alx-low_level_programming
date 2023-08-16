#include "function_pointers.h"
/**
* int_index - does my stuff
* @array: ara
* @size: size of arr
* @cmp: function ptr
* Description:does my stuff explained
* Return:Always(Success);
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
}

	return (-1);

}
