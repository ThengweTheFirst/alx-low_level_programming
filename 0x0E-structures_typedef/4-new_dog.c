#include <stdlib.h>
#include "dog.h"

/**
 * new-dog - creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, a, b;

	struct dog *n_dog = NULL;

	a = 0;
	while (name[a] != '\0')
		a++;
	b = 0;
	while (owner[b] != '\0')
		b++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name =malloc(a + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return(NULL);
	}
	n_dog->owner = malloc(b + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return(NULL);
	}
	for (i = 0; i <= a; i++)
		n_dog->owner[i] = name[i];
	for (i = 0; i <= b; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return(n_dog);
}
