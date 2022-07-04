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
	int i = 0, j = 0, k;
	dog_t *tiger;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	tiger = malloc(sizeof(tiger->name));
	if (tiger-> == NULL)
	{
		free(tiger->name);
		free(tiger);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		tiger->name[k] = name[k];
	dog->age = age;
	dog->owner = malloc(j * sizeof(tiger->owner));
	if (tiger->owner == NULL)
	{
		free(tiger->owner);
		free(tiger->name);
		free(tiger);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		tiger->owner[k] = owner[k];
	return (tiger);
}
	        
