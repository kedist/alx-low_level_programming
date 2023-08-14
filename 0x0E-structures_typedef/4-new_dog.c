#include <stdlib.h>
#include "dog.h"
/**
* new_dog - does my stuff
* @name: dogs name
* @age: dogs age
* @owner: dogs owner
* Description:does my stuff explained
* Return:Always(Success);
*/
dog_t *new_dog(char *name, float age, char *owner)
{

	int i, k, newl, ownerl;
	dog_t *bdog;

	newl = ownerl = 0;
	while (name[newl++])
		;
	while (owner[ownerl++])
		;
	bdog = malloc(sizeof(dog_t));
	if (bdog == NULL)
		return (NULL);
	bdog->name = malloc(newl * sizeof(bdog->name));
	if (bdog == NULL)
		return (NULL);
	for (i = 0; i < newl; i++)
		bdog->name[i] = name[i];
	bdog->age = age;
	bdog->owner = malloc(ownerl * sizeof(bdog->owner));
	if (bdog == NULL)
		return (NULL);
	for (k = 0; k < ownerl; k++)
		bdog->owner[k] = owner[k];
	return (bdog);
}
