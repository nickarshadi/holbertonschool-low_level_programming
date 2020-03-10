#ifndef DOG_H
#define DOG_H
/**
 * struct dog - description
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: characteristics of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 *dog_t - Typedef for void
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
#endif
