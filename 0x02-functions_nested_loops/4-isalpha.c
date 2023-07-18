#include "main.h"
/**
* _isalpha  - does my stuff
* @c: The
* Description:does my stuff explained
* Return:Always(Success);
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
