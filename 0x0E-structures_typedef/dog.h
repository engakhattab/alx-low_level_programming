#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - this descriprion for dog
 * @name : me
 * @age : ge
 * @owner : ve
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};




void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
