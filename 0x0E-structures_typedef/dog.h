#ifndef DOG_H
#define DOG_H

/**
 * struct dog - info about a dog
 * @name: First element
 * @age: Second element
 * @owner: Third element
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
