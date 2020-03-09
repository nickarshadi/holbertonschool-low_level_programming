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
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
