#ifndef HEADERFILE_H
#define HEADERFILE_H

/**
 * struct dog - dog struct with attributes
 * @name: Dog name
 * @age: Dog's age
 * @owner: Dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
