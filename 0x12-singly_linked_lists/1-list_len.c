#include "lists.h"
/**
* list_len - does my stuff
* @h: pointer to list
* Description:does my stuff explained
* Return:Always(Success);
*/
size_t list_len(const list_t *h)
{
const list_t *curr;
size_t size = 0;
curr = h;
while (curr != NULL)
{
	curr = curr->next;
	size++;
}
return (size);
}
