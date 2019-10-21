#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - define a new type of element of type dog.
 * @name: define a name of dog
 * @age: define the age of dog
 * @owner: define the owner of dog.
 *
 * Description: this struct create a new structure of type dog.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
