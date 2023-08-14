#ifndef _D_H_
#define _D_H_
/**
 * dog_t - type def for struct  dog
 */
typedef struct dog dog_t;

/**
 *struct dog - structure that stores name age and owner
 *@name: name of dog
 *@age: age of odlg
 *@owner: owner of dog
 *Description: does my stuff
 */

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
