#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - create a new dog with name age owner
 * @name: string
 * @age: double
 * @owner: string
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nath;
	char *na, *ow;
	int na_l;
	int ow_l;

	na = malloc(sizeof(*name));
	if (na == NULL)
	{
		return (NULL);
	}
	ow = malloc(sizeof(*owner));
	if (ow == NULL)
	{
		free(na);
		return (NULL);
	}
	nath = malloc(sizeof(dog_t));
	if (nath == NULL)
	{
		free(na);
		free(ow);
		return (NULL);
	}
	na_l = _strlen(name);
	ow_l = _strlen(owner);
	_memcpy(na, name, na_l + 1);
	_memcpy(ow, owner, ow_l + 1);
	nath->name = na;
	nath->owner = ow;
	nath->age = age;
	return (nath);
}
/**
 * _strlen - get length of string
 * @s: string
 * Return: length int
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{}
	return (a);
}
/**
 * _memcpy - duplicate src in dest
 * @dest: string1
 * @src: string2
 * @n: stringlength
 * Return: deststring
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
