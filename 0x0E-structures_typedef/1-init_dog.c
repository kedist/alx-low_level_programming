#include <unistd.h>
#include "dog.h"
/**
* init_dog  - does my stuff
* @d: parametr
* @name: padsdfef
* @age: padsf
* @owner: asdfads
* Description:does my stuff explained
* Return:Always(Success);
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
