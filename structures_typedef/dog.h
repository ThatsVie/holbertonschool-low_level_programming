#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type
 * @name: pointer to  a string, dog's name
 * @age: float, age of dog
 * @owner: pointer to string, owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
