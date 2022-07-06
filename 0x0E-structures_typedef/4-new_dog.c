#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *s_name;
	char *s_owner;
	int i, j, k, l;
	struct dog *tiger;

	tiger = malloc(sizeof(struct dog));
	if (tiger == NULL)
		return (NULL);
	for (i = 0; *(name + i) != '\0'; i++)
		;
	for (j = 0; *(owner + j) != '\0'; j++)
		;
	s_name = malloc(i + 1);
	if (s_name
