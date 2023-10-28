#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * new_dog - creates a new dog with name, age and owner
 * @name: pointer to string, dog's name
 * @age: age of dog
 * @owner: pointer to string, owner's name
 *
 * Return: a pointer to newly created dog, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *perrito;

	perrito = malloc(sizeof(dog_t));
	if (perrito == NULL)
	{
		return (NULL);
	}

	perrito->name = (char *)malloc(strlen(name) + 1);
	if (perrito->name == NULL)
	{
		free(perrito);
		return (NULL);
	}

	perrito->owner =(char *)malloc(strlen(owner) + 1);
	if (perrito->owner == NULL)
	{
		free(perrito);
		free(perrito->name);
		return (NULL);
	}
	strcpy(perrito->name, name);
	strcpy(perrito->owner, owner);
	perrito->age = age;

	return (perrito);
}
