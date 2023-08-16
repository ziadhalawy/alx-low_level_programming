#include <stdio.h>
#include "dog.h"
#include <stdlib.h>


/**
 * new_dog - print the data of a dog
 * @d: the paramter of type dog
 *
 * Return: Always Nothing.
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	if (d == NULL)
	{
	return;
	}
	else if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	else if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
