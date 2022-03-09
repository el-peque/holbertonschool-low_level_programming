#ifndef DOG
#define DOG

/**
 * struct dog - doggy
 * @name: name of doggy
 * @age:  age of doggy
 * @owner: who owns doggy
 *
 * Description: dog defined by name, age and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG */
