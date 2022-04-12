#ifndef _DOG_
#define _DOG_

/**
 * struct dog_t - dog_t struct
 */

typedef struct dog dog_t;

/**
 * struct dog - dog struct
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: This isa longer description for struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif