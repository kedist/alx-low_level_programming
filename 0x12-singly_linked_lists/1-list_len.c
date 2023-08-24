#include "lists.h"
/**
* list_len - does my stuff
* @h: pointer to list 
* Description:does my stuff explained
* Return:Always(Success);
*/
size_t list_len(const list_t *h)
{
size_t size = 0;
while (h != NULL)
{
	h = h->next;
	size++;
}
return (size);
}
