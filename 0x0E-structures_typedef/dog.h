#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: the dog owner 
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

/**
 * void prototypes()
 * typedef prototype()
 */

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif //DOG_H
