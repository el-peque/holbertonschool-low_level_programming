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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif /* DOG */
